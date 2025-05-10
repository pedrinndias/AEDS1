Dataset carregado do caminho Kaggle.
Iniciando a busca de hiperparâmetros com GridSearchCV...
Fitting 3 folds for each of 162 candidates, totalling 486 fits

Melhores Parâmetros Encontrados pelo GridSearchCV:
{'class_weight': 'balanced_subsample', 'max_depth': None, 'min_samples_leaf': 3, 'min_samples_split': 5, 'n_estimators': 100}

Acurácia do Modelo no Conjunto de Treinamento: 0.7544
Acurácia do Modelo no Conjunto de Teste: 0.7283
Diferença de Acurácia (Treino - Teste): 0.0262

Relatório de Classificação no Conjunto de Teste:
                     precision    recall  f1-score   support

Salário Baixo/Médio       0.84      0.65      0.73       568
       Salário Alto       0.64      0.84      0.72       422

           accuracy                           0.73       990
          macro avg       0.74      0.74      0.73       990
       weighted avg       0.76      0.73      0.73       990


Parâmetros do Melhor Modelo Random Forest Utilizado:
{'bootstrap': True, 'ccp_alpha': 0.0, 'class_weight': 'balanced_subsample', 'criterion': 'gini', 'max_depth': None, 'max_features': 'sqrt', 'max_leaf_nodes': None, 'max_samples': None, 'min_impurity_decrease': 0.0, 'min_samples_leaf': 3, 'min_samples_split': 5, 'min_weight_fraction_leaf': 0.0, 'n_estimators': 100, 'n_jobs': -1, 'oob_score': False, 'random_state': 42, 'verbose': 0, 'warm_start': False}

Todos os gráficos foram salvos no diretório: /kaggle/working/
