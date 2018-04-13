//suma
float suma(float num1, float num2)
{
    float resultado;
    resultado = num1 + num2;

    return resultado;
}

//resta:
float resta(float num1 , float num2)
{
    float resultado;
    resultado = num1 - num2;

    return resultado;
}

//division
float division(float num1 , float num2)
{
    float resultado;
    resultado = num1 / num2;

    return resultado;
}

//multiplicacion:
float multiplicacion(float num1 , float num2)
{
    float resultado;
    resultado = num1 * num2;

    return resultado;
}

//factorial
int factorial(float num1)
{
    int i;
    int resultado=1;

    for(i=1 ; i <= num1 ; i++)
    {
        resultado = resultado*i;
    }
    return resultado;
}
