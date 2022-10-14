#ifndef SCIENTIFICCALCULATOR_H
#define SCIENTIFICCALCULATOR_H


class ScientificCalculator
{
    public:
        ScientificCalculator();
        void Calculation(int choice);
        void Continuing_Calculation(int choice);
        void Alternate_Calculation(int choice);
        void Alternate_Calculation_2(int choice);
        void Show_History();
        void Delete_History();

    private:
        int Option;
};

#endif // SCIENTIFICCALCULATOR_H
