#include <iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main(){

    std::string cardNumber;
    int result = 0;

    std::cout << "ENter a credit card number: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if (result % 10 == 0){ // returns boolean
    std::cout << " Card number is valid !";
    }

    else{
        std::cout << "Card number is not valid !";
    }

    return 0;

}

int getDigit(const int number){

    return (number % 10) + (number / 10 % 10) ;  // splits the number
}
int sumOddDigits(const std::string cardNumber){

        int sum = 0;

    for(int i = cardNumber.size() - 1; i >= 0 ; i -= 2){  // araays start from 0, thus this for loop will start from the last position
        sum += getDigit((cardNumber[i] - '0'));    // We are subtracting the hexidecimal value of the '0'

        return sum;    
    }

}
int sumEvenDigits(const std::string cardNumber){

    int sum = 0;

    for(int i = cardNumber.size() - 2; i >= 0 ; i -= 2){  // ararys start from 0, thus this fro loop will start from the seconfd last position
        sum += getDigit((cardNumber[i] - '0') * 2);    // We are subtracting the hexidecimal value of the '0'

        return sum;    
    }


}
