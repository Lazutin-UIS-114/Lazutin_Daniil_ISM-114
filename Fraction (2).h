#pragma once


/**
* \brief Класс Fraction для представления дроби вида <целая часть>.<дробная часть>
*/
class Fraction {
private:

    long int int_part; //целая часть числа

    unsigned short fract_part; //дробная часть числа

    const int MAX_FRACT_COUNT = 4;  //максимальное кол-во цифр в дробной части

    int count_digits(int num); //подсчёт количество цифр в числе

public:
    /**
    * \brief конструктор дробного числа
    */
    Fraction(long int int_part, unsigned short fract_part);

    /**
    * \brief сложение двух дробных чисел
    */
    Fraction operator+(const Fraction& other); 

    /**
    * \brief вычитание двух дробных чисел
    */
    Fraction operator-(const Fraction& other);

    /**
    * \brief умножение двух дробных чисел
    */
    Fraction operator*(const Fraction& other);

    /**
    * \brief сравнение двух дробных чисел
    */
    bool operator==(const Fraction& other);

    /**
    * \brief Перегруженный оператор вывода
    */
    friend std::ostream& operator<< (std::ostream& out, const Fraction& point); 
};
