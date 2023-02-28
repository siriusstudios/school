using UnityEngine;

public class Hacker : MonoBehaviour

{
    int level;
    bool passwordMatch = false;
    enum Screen { MainMenu, Password, Win };
    Screen currentScreen = Screen.MainMenu;
    // Start is called before the first frame update

    void Start()
    {
        ShowMainMenu();
    }             
    void ShowMainMenu()
    {
        Terminal.WriteLine("What would you like to hack into? ");
        Terminal.WriteLine("Press 1 for the card with your mother's cash.");
        Terminal.WriteLine("Press 2 for the local bank.");
        Terminal.WriteLine("Enter your selection below :");
    }

    // Update is called once per frame
    void OnUserInput(string input)
    {
        if (input == "menu")
        {
            ShowMainMenu();
        }

        if (currentScreen == Screen.Password)
        {
            checkPassword(input);
        }

        if (currentScreen == Screen.MainMenu)
        {
            ProcessMenu(input);
        }

    }

    private void ProcessMenu(string input)
    {
        if (input == "1")
        {
            setLevel(1);
        }
        else if (input == "2")
        {
            setLevel(2);
        }
        else if (input == "007")
        {
            Terminal.WriteLine("Please select the level Mr. Bond!");
        }

    }

    void checkPassword(string password)
    {
        Terminal.WriteLine("Check password for " + password);
        Terminal.WriteLine("Current screen is " + currentScreen);

        if (this.level == 2)
        {
            switch (password)
            {
                case "lombard":
                    passwordMatch = true;
                    break;

                case "LombarD":
                    passwordMatch = true;
                    break;
                default:
                    passwordMatch = false;
                    break;
            }
        }
        else
        {
            switch (password)
            {
                case "wallet":
                    passwordMatch = true;
                    break;

                case "Wallet":
                    passwordMatch = true;
                    break;
                default:
                    passwordMatch = false;
                    break;
            }

        }
        //Terminal.ClearScreen();
        if (passwordMatch)
        {
            Terminal.WriteLine("You guessed correctly!");
        }
        else
        {
            Terminal.WriteLine("You lost! ");
        }
        level = 0;
        passwordMatch = false;
        Terminal.WriteLine("Type 'menu' to start again");

    }

    void setLevel(int input)
    {
        currentScreen = Screen.Password;

        switch (input)
        {
            case 1:
                this.level = 1;
                Terminal.WriteLine("You chose to hack the card with your mother's cash. Please correct the following word, to know the password: 'llawet'");
                break;

            case 2:
                this.level = 2;
                Terminal.WriteLine("You chose to hack the local bank! Please correct the following word: rambold");

                break;
            default:
                Terminal.WriteLine("Choose a level!");
                break;
        }
        Terminal.WriteLine("You have set level " + this.level);

    }
}
