#pragma once

using namespace System;
using namespace System::Windows::Forms;

namespace CustomControls {

    public ref class CustomButton : public Button
    {
    private:
        String^ nomEsdev;

    public:
        // Constructor
        CustomButton()
        {
            // Initialize the custom attribute
            nomEsdev = "Gala";
        }

        // Property for the custom attribute
        property String^ NomEsdev
        {
            String^ get()
            {
                return nomEsdev;
            }
            void set(String^ value)
            {
                nomEsdev = value;
            }
        }
    };

}