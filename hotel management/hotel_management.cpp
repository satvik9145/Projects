#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int quantity;
    int choice;
    //  quantity

    int Qroom = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake, Qchicken = 0;

    int Sroom = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake, Schicken = 0;
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;

    cout << "\n\t Quantity of  items we have:";
    cout << "\n \nRoom avaliable:";
    cin >> Qroom;
    cout << "\n quantity of pasta:";
    cin >> Qpasta;
    cout << "\n quantity of burger:";
    cin >> Qburger;
    cout << "\n quantity of noodles:";
    cin >> Qnoodles;
    cout << "\n quantity of shake:";
    cin >> Qshake;
    cout << "\n quantity of chicken roll:";
    cin >> Qchicken;
m:
    cout << "\n\t\tPlease select from the menu option";

    cout << "\n\n1) Rooms";
    cout << "\n2) pasta";
    cout << "\n3) burger";
    cout << "\n4) noodles";
    cout << "\n5) shake";
    cout << "\n6) chicken roll";
    cout << "\n7) Information regarding sales and collection";
    cout << "\n8) Exit";

    cout << "\n\n please enter your choice";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n\n Enter the numbers of room you want:";
        cin >> quantity;
        if (Qroom - Sroom >= quantity)
        {
            Sroom = Sroom + quantity;
            Total_rooms = Total_rooms + quantity * 1200;
            cout << "\n\n\t\t" << quantity << "Room/Rooms have been alloted to you!";
        }
        else
        {
            cout << "\n\tonly" << Qroom - Sroom << "Room remaining in hotel";
        }

        break;

    case 2:
        cout << "\n\n Enter Pasta quantity";
        cin >> quantity;
        if (Qpasta - Spasta >= quantity)
        {
            Spasta = Spasta + quantity;
            Total_pasta = Total_pasta + quantity * 250;
            cout << "\n\n\t\t" << quantity << "Pasta is the order";
        }
        else
        {
            cout << "\n\tonly" << Qpasta - Spasta << "Pasta remaining in hotel";
        }

        break;
    case 3:
        cout << "\n\n Enter burger quantity:";
        cin >> quantity;
        if (Qburger - Sburger >= quantity)
        {
            Sburger = Sburger + quantity;
            Total_burger = Total_burger + quantity * 120;
            cout << "\n\n\t\t" << quantity << "burger is the order";
        }
        else
        {
            cout << "\n\tonly" << Qburger - Sburger << "burger remaining in hotel";
        }

        break;
    case 4:
        cout << "\n\n Enter noodles quantity:";
        cin >> quantity;
        if (Qnoodles - Snoodles >= quantity)
        {
            Snoodles = Snoodles + quantity;
            Total_noodles = Total_noodles + quantity * 150;
            cout << "\n\n\t\t" << quantity << "Noodles is the order";
        }
        else
        {
            cout << "\n\tonly" << Qnoodles - Snoodles << "Noodles remaining in hotel";
        }

        break;
    case 5:
        cout << "\n\n Enter shake quantity:";
        cin >> quantity;
        if (Qshake - Sshake >= quantity)
        {
            Sshake = Sshake + quantity;
            Total_burger = Total_burger + quantity * 170;
            cout << "\n\n\t\t" << quantity << "Shake is the order";
        }
        else
        {
            cout << "\n\tonly" << Qshake - Sshake << "Shake remaining in hotel";
        }

        break;
    case 6:
        cout << "\n\n Enter Chicken roll quantity:";
        cin >> quantity;
        if (Qchicken - Schicken >= quantity)
        {
            Schicken = Schicken + quantity;
            Total_chicken = Total_chicken + quantity * 190;
            cout << "\n\n\t\t" << quantity << "Chicken roll is the order";
        }
        else
        {
            cout << "\n\tonly" << Qchicken - Schicken << "chiken roll remaining in hotel";
        }

        break;
    case 7:
        cout << "\n Details of sales and collection";
        cout << "\n\n Number of room we had:" << Qroom;
        cout << "\n\n Number of room we gave for rent: " << Sroom;
        cout << "\n\n Remaining rooms:" << Qroom - Sroom;
        cout << "\n\n Total rooms collection for a day:" << Total_rooms;

        cout << "\n\n Number of pasta we had:" << Qpasta;
        cout << "\n\n Number of pasta we gave for rent: " << Spasta;
        cout << "\n\n Remaining pasta:" << Qpasta - Spasta;
        cout << "\n\n Total pasta collection for a day:" << Total_pasta;

        cout << "\n\n Number of burger we had:" << Qburger;
        cout << "\n\n Number of burger we gave for rent: " << Sburger;
        cout << "\n\n Remaining burger:" << Qburger - Sburger;
        cout << "\n\n Total burger collection for a day:" << Total_burger;

        cout << "\n\n Number of noodles we had:" << Qnoodles;
        cout << "\n\n Number of noodles we gave for rent: " << Snoodles;
        cout << "\n\n Remaining noodles:" << Qnoodles - Snoodles;
        cout << "\n\n Total noodles collection for a day:" << Total_noodles;

        cout << "\n\n Number of shake we had:" << Qshake;
        cout << "\n\n Number of shake we gave for rent: " << Sshake;
        cout << "\n\n Remaining shake:" << Qshake - Sshake;
        cout << "\n\n Total shake collection for a day:" << Total_shake;

        cout << "\n\n Number of chicken roll we had:" << Qchicken;
        cout << "\n\n Number of chicken roll we gave for rent: " << Schicken;
        cout << "\n\n Remaining chicken roll:" << Qchicken - Schicken;
        cout << "\n\n Total chicken roll collection for a day:" << Total_chicken;
        
        cout<<"\n\n\nTotal collection of the day:"<<Total_pasta+Total_burger+Total_rooms+Total_chicken+Total_shake;
        break;

    case 8:
        exit(0);

    default:
        cout << "\n\t Please select the number mentioned above";
    }
    goto m;
}

