#pragma once
class Fraction {
private:
    long int int_part; //����� ����� �����

    unsigned short fract_part; //������� ����� �����

    const int max_fract_count = 4;  //������������ ���-�� ���� � ������� �����

    int count_digits(int num); //������� ���������� ���� � �����

public:
    Fraction(long int int_part, unsigned short fract_part); //����������� �������� �����

    Fraction operator+(const Fraction& other); //�������� ���� ������� �����

    Fraction operator-(const Fraction& other); //��������� ���� ������� �����

    Fraction operator*(const Fraction& other); // ��������� ���� ������� �����

    bool operator==(const Fraction& other); //��������� ���� ������� �����

    void print(); //����� �� ����� �������� ����� � ���� 1.1234
};