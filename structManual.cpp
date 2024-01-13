#include <iostream>

using namespace std;

struct Car
{
    enum
    {
        ID_LEN = 20,
        MAX_SPD = 200,
        FUEL_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10
    };

    char gamerID[ID_LEN];
    int fuelGauge;
    int curSpeed;

    void ShowCarState()
    {
        cout << "������ ID: " << gamerID << endl;
        cout << "���ᷮ: " << fuelGauge << "%" << endl;
        cout << "���� �ӵ�: " << curSpeed << "km/h" << endl << endl;
    }

    void Accel()
    {
        if (fuelGauge <= 0)
            return;
        else
            fuelGauge -= FUEL_STEP;

        if (curSpeed + ACC_STEP >= MAX_SPD)
        {
            curSpeed = MAX_SPD;
            return;
        }
        curSpeed += ACC_STEP;
    }

    void Break()
    {
        if (curSpeed < BRK_STEP)
        {
            curSpeed = 0;
            return;
        }
        curSpeed -= BRK_STEP;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);



    Car run99 = { "run99", 100, 0 };
    run99.Accel(); // run99�� �ɹ� �Լ�
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();

    Car sped77 = { "sped77", 100, 0 };
    sped77.Accel();  // sped77�� �ɹ� �Լ�
    sped77.Break();
    sped77.ShowCarState();

    // system("pause");  // VC++ ������ �ʿ�

    return 0;
}