#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QMessageBox>
#include <cstdlib>
#include <ctime>

class RPSGame : public QWidget {
public:
    RPSGame(QWidget *parent = nullptr) : QWidget(parent) {
        // Create the user input label and line edit
        QLabel *inputLabel = new QLabel("Enter either R, P, S:");
        inputLineEdit = new QLineEdit;
        inputLineEdit->setMaxLength(1); // restrict input to one character

        // Create the game output label
        gameOutputLabel = new QLabel;

        // Create the play button and connect it to the play() slot
        QPushButton *playButton = new QPushButton("Play");
        connect(playButton, &QPushButton::clicked, this, &RPSGame::play);

        // Create the layout for the widget
        QVBoxLayout *layout = new QVBoxLayout;
        layout->addWidget(inputLabel);
        layout->addWidget(inputLineEdit);
        layout->addWidget(gameOutputLabel);
        layout->addWidget(playButton);

        // Set the layout for the widget
        setLayout(layout);
    }

private slots:
    void play() {
        // Get the user input and convert it to uppercase
        QString userInput = inputLineEdit->text().toUpper();

        // Check if the input is valid
        if (userInput != "R" && userInput != "P" && userInput != "S") {
            QMessageBox::warning(this, "Invalid Input", "Please enter either R, P, or S.");
            return;
        }

        // Generate a random number between 0 and 2
        srand(time(0));
        int num = rand() % 3;

        // Determine the game outcome
        QString gameOutput;
        if (Container[num] == "R" && userInput == "P") {
            gameOutput = "Paper covers rock\nYou win!!";
        }
        else if (Container[num] == "R" && userInput == "S") {
            gameOutput = "Rock smashes scissors\nYou lose!!";
        }
        else if (Container[num] == "P" && userInput == "S") {
            gameOutput = "Scissors cut paper\nYou win!!";
        }
        else if (Container[num] == "P" && userInput == "R") {
            gameOutput = "Paper covers rock\nYou lose!!";
        }
        else if (Container[num] == "S" && userInput == "P") {
            gameOutput = "Scissors cut paper\nYou lose!!";
        }
        else if (Container[num] == "S" && userInput == "R") {
            gameOutput = "Rock smashes scissors\nYou win!!";
        }
        else {
            gameOutput = "It's a draw";
        }

        // Update the game output label
        gameOutputLabel->setText(QString("You chose %1\nI chose %2\n%3").arg(userInput).arg(Container[num]).arg(gameOutput));
    }

private:
    QLineEdit *inputLineEdit;
    QLabel *gameOutputLabel;
    QString Container[3] = {"R", "P", "S"};
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    RPSGame game;
    game.show();

    return app.exec();
}
