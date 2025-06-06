#include <stdio.h>
#include <stdlib.h> 
int positive_modulo(int i, int n) {
    return (i % n + n) % n;
}
int main() {
    int h_pa, m_pa, h_cb, m_cb, h_pb, m_pb, h_ca, m_ca;

    if (scanf("%d:%d %d:%d %d:%d %d:%d", &h_pa, &m_pa, &h_cb, &m_cb, &h_pb, &m_pb, &h_ca, &m_ca) != 8) {
        return 1;
    }
    int pa_mins = h_pa * 60 + m_pa;
    int cb_mins = h_cb * 60 + m_cb;
    int pb_mins = h_pb * 60 + m_pb;
    int ca_mins = h_ca * 60 + m_ca;
    int L1 = cb_mins - pa_mins;
    int L2 = ca_mins - pb_mins;
    int S = L1 + L2;
    int target_S_val = positive_modulo(S, 1440);                                    
    int flight_duration_minutes = target_S_val / 2;
    int K_sum_mult = (target_S_val - S) / 1440;
    int K_sum_parity = positive_modulo(K_sum_mult, 2);
    int D_val = L1 - L2;
    int final_delta = 0; 
    int K_diff_mult_candidates[] = {0, -1, 1}; 
    for (int i = 0; i < 3; ++i) {
        int current_K_diff_mult = K_diff_mult_candidates[i];
        
        int term_120_delta = D_val + current_K_diff_mult * 1440;

        if (term_120_delta % 120 == 0) {
            int current_delta = term_120_delta / 120;
            int current_K_diff_parity = positive_modulo(current_K_diff_mult, 2);

            if (current_delta >= -11 && current_delta <= 12) {
                if (current_K_diff_parity == K_sum_parity) {
                    final_delta = current_delta;
                    break; 
                }
            }
        }
    }
    printf("%d %d\n", flight_duration_minutes, final_delta);
    return 0;
}
