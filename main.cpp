#include <bits/stdc++.h>

using namespace std;

int main()
{
    double rSalario, rServico, rCapital, gMedico, gEducacao;
    double impSalario = 0, impServico = 0, impCapital = 0, impTotal = 0, maxDedutivel = 0, gDedutivel = 0, deducao = 0;

    //Leitura dos dados
    cout << "Renda anual com salario: ";
    cin >> rSalario;
    cout << "Renda anual com prestacao de servico: ";
    cin >> rServico;
    cout << "Renda anual com ganho de capital: ";
    cin >> rCapital;
    cout << "Gastos medicos: ";
    cin >> gMedico;
    cout << "Gastos educacionais: ";
    cin >> gEducacao;

    //Calculos
    if(rSalario/12 < 3000) impSalario = 0;
    else if(rSalario/12 >= 3000 && rSalario/12 < 5000) impSalario = rSalario * 0.1;
    else impSalario = rSalario * 0.2;

    impServico = rServico * 0.15;

    impCapital = rCapital * 0.2;

    impTotal = impSalario + impServico + impCapital;

    maxDedutivel = impTotal * 0.3;
    gDedutivel = gMedico + gEducacao;

    //Consolidado de renda
    cout << fixed << setprecision(2);
    cout << endl << "RELATORIO DE IMPOSTO DE RENDA" << endl;

    cout << endl << "CONSOLIDADO DE RENDA:" << endl;
    cout << "Imposto sobre salario: " << impSalario << endl;
    cout << "Imposto sobre servicos: " << impServico << endl;
    cout << "Imposto sobre ganho de capital: " << impCapital << endl;

    //Deducoes
    cout << endl << "DEDUCOES:" << endl;
    cout << "Maximo dedutivel: " << maxDedutivel << endl;
    cout << "Gastos dedutiveis: " << gDedutivel << endl;

    //Resumo
    cout << endl << "RESUMO:" << endl;
    cout << "Imposto bruto total: " << impTotal << endl;
    if(maxDedutivel < gDedutivel){
            cout << "Abatimento: " << maxDedutivel << endl;
            deducao = maxDedutivel;
    } else {
        cout << "Abatimento: " << gDedutivel << endl;
        deducao = gDedutivel;
    }
    cout << "Imposto devido: " << impTotal - deducao << endl;

    return 0;
}
