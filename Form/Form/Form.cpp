
#include "C_Form.h"
#include<vector>
#include<algorithm>
using std::vector;

int main()
{
    std::vector<C_Form> forms;
    forms.push_back(C_Form(15, "Andrew", "0980319827"));
    forms.push_back(C_Form(25, "Masha", "0669854637"));
    forms.push_back(C_Form(17, "Natasha", "0938894536"));
    forms.push_back(C_Form(43, "John", "0994352647"));
    forms.push_back(C_Form(30, "Jane", "0678834526"));
    forms.push_back(C_Form(18, "Ruby", "0993341675"));
    forms.push_back(C_Form(65, "Oksana", "0687456374"));
    forms.push_back(C_Form(12, "Dasha", "0997654536"));
    forms.push_back(C_Form());
    std::cout << "Age is less than 18\n";
    auto res = std::find_if(forms.begin(), forms.end(), [](C_Form& obj) {return obj.get_age() < 18 == 1; });
    while (res != forms.end())
    {
        std::cout << *res << "\n";
        res = std::find_if(res + 1, forms.end(), [](C_Form& obj) {return obj.get_age() < 18 == 1; });
    }
    std::cout << "\nParticipants: \n";
    auto res_1 = std::find_if(forms.begin(), forms.end(), [](C_Form& obj) {return (obj.get_age() > 18 == 1 && strlen(obj.get_name()) != 1 && strlen(obj.get_number()) != 1); });
    while (res_1 != forms.end())
    {
        std::cout << *res_1 << "\n";
        res_1 = std::find_if(res_1 + 1, forms.end(), [](C_Form& obj) {return obj.get_age() > 18 == 1; });
    }
}

