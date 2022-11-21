//Перевірити істинність висловлення: «Серед трьох заданих цілих чисел є хоча б одна пара співпадаючих». 


#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    printf("Enter three integers:\n");
    scanf("%i%i%i", &a, &b, &c);

    cout << "Is there at least one pair of integers?   " << boolalpha << (a == b || b == c || c == a) << endl;

    return 0;
}