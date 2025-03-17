/***************************************************************
 * Name:      wisielecMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2024-01-09
 * Copyright:  ()
 * License:
 **************************************************************/


#include <wx/msgdlg.h>

//(*InternalHeaders(wisielecDialog)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)
#include "wisielecMain.h"
#include <sstream>
#include <wx/log.h>

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(wisielecDialog)
const long wisielecDialog::ID_STATICTEXT1 = wxNewId();
const long wisielecDialog::ID_STATICTEXT4 = wxNewId();
const long wisielecDialog::ID_STATICTEXT5 = wxNewId();
const long wisielecDialog::ID_STATICBITMAP4 = wxNewId();
const long wisielecDialog::ID_STATICTEXT6 = wxNewId();
const long wisielecDialog::ID_STATICBITMAP1 = wxNewId();
const long wisielecDialog::ID_STATICBITMAP2 = wxNewId();
const long wisielecDialog::ID_STATICTEXT8 = wxNewId();
const long wisielecDialog::ID_BITMAPBUTTON1 = wxNewId();
const long wisielecDialog::ID_BUTTON1 = wxNewId();
const long wisielecDialog::ID_TEXTCTRL1 = wxNewId();
const long wisielecDialog::ID_STATICTEXT2 = wxNewId();
const long wisielecDialog::ID_STATICTEXT3 = wxNewId();
const long wisielecDialog::ID_STATICBITMAP3 = wxNewId();
const long wisielecDialog::ID_STATICTEXT7 = wxNewId();
const long wisielecDialog::ID_BUTTON2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(wisielecDialog,wxDialog)
    //(*EventTable(wisielecDialog)
    //*)
END_EVENT_TABLE()

wisielecDialog::wisielecDialog(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(wisielecDialog)
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizer2;
    wxBoxSizer* BoxSizer4;
    wxBoxSizer* BoxSizer5;
    wxBoxSizer* BoxSizer6;
    wxFlexGridSizer* FlexGridSizer1;
    wxFlexGridSizer* FlexGridSizer2;
    wxFlexGridSizer* FlexGridSizer3;
    wxFlexGridSizer* FlexGridSizer4;
    wxFlexGridSizer* FlexGridSizer5;
    wxFlexGridSizer* FlexGridSizer6;
    wxFlexGridSizer* FlexGridSizer7;

    Create(parent, wxID_ANY, _("Wisielec"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxMINIMIZE_BOX, _T("wxID_ANY"));
    SetBackgroundColour(wxColour(255,255,255));
    FlexGridSizer1 = new wxFlexGridSizer(7, 0, 0, 0);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Label"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT1"));
    wxFont StaticText1Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    FlexGridSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
    StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Kategoria:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    BoxSizer5->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    BoxSizer5->Add(StaticText5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(BoxSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
    StaticBitmap4 = new wxStaticBitmap(this, ID_STATICBITMAP4, wxBitmap(wxImage(_T("diamond.png"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP4"));
    BoxSizer6->Add(StaticBitmap4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    wxFont StaticText6Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    StaticText6->SetFont(StaticText6Font);
    BoxSizer6->Add(StaticText6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(BoxSizer6, 1, wxALL, 5);
    FlexGridSizer1->Add(BoxSizer1, 5, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer2 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("wisielec0.jpg"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
    FlexGridSizer2->Add(StaticBitmap1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer5 = new wxFlexGridSizer(4, 0, 0, 0);
    BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
    StaticBitmap2 = new wxStaticBitmap(this, ID_STATICBITMAP2, wxBitmap(wxImage(_T("diamond_mniejszy.png"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP2"));
    BoxSizer4->Add(StaticBitmap2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText8 = new wxStaticText(this, ID_STATICTEXT8, _("10"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
    wxFont StaticText8Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    StaticText8->SetFont(StaticText8Font);
    BoxSizer4->Add(StaticText8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer5->Add(BoxSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton1 = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("zarowka.PNG"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
    FlexGridSizer5->Add(BitmapButton1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer2->Add(FlexGridSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer4 = new wxFlexGridSizer(0, 2, 0, 0);
    Button1 = new wxButton(this, ID_BUTTON1, _("enter"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button1->Hide();
    FlexGridSizer4->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("wpisz literę"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    FlexGridSizer4->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(FlexGridSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer3 = new wxFlexGridSizer(2, 1, 0, 0);
    FlexGridSizer3->AddGrowableCol(0);
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Użyte litery:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    wxFont StaticText2Font(13,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    FlexGridSizer3->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText3 = new wxStaticText(this, ID_STATICTEXT3, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT|wxALIGN_CENTRE, _T("ID_STATICTEXT3"));
    wxFont StaticText3Font(11,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    StaticText3->SetFont(StaticText3Font);
    FlexGridSizer3->Add(StaticText3, 1, wxALL, 5);
    FlexGridSizer1->Add(FlexGridSizer3, 1, wxALL|wxEXPAND, 5);
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    FlexGridSizer7 = new wxFlexGridSizer(0, 0, 0, 0);
    StaticBitmap3 = new wxStaticBitmap(this, ID_STATICBITMAP3, wxNullBitmap, wxDefaultPosition, wxSize(40,30), 0, _T("ID_STATICBITMAP3"));
    FlexGridSizer7->Add(StaticBitmap3, 1, wxALL, 5);
    BoxSizer2->Add(FlexGridSizer7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer6 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
    wxFont StaticText7Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    StaticText7->SetFont(StaticText7Font);
    FlexGridSizer6->Add(StaticText7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2->Add(FlexGridSizer6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(BoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button2 = new wxButton(this, ID_BUTTON2, _("nowe słowo"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    Button2->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
    FlexGridSizer1->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(FlexGridSizer1);
    FlexGridSizer1->Fit(this);
    FlexGridSizer1->SetSizeHints(this);

    Connect(ID_BITMAPBUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&wisielecDialog::OnBitmapButton1Click);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&wisielecDialog::OnButton1Click);
    Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&wisielecDialog::OnButton1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&wisielecDialog::OnButton2Click);
    //*)

    SetIcon(wxICON(aaaa));

    this->FlexGridSizer1 = FlexGridSizer1;
    srand(time(0));
    InitializeGame();
}

wisielecDialog::~wisielecDialog()
{
    //(*Destroy(wisielecDialog)
    //*)
}

void wisielecDialog::OnQuit(wxCommandEvent& event)
{
    Close();
}

void wisielecDialog::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}


void wisielecDialog::OnButton1Click(wxCommandEvent& event)
{
    wxString input = TextCtrl1->GetValue();

    if(!gameFinished)
    {
        if (input.length() == 1 && wxIsalpha(input[0]))
    {
        auto guessedLetter = input[0];

        if (usedLetters.find(guessedLetter) == wxString::npos)
        {
            if(usedLetters.length()==0)
                {
                usedLetters = wxString(guessedLetter);
                }
            else
                {
                usedLetters +=   ", " + wxString(guessedLetter);
                }

            bool correctGuess = false;
            guessedWord = StaticText1->GetLabel();
            for (size_t i = 0; i < secretWord.length(); ++i)
            {
                if (secretWord[i] == guessedLetter)
                {
                   guessedWord[i * 2] = guessedLetter;
                    correctGuess = true;
                }
            }


            if (correctGuess) {
                   StaticText1->SetLabel(guessedWord);
            }

            if (guessedWord.find('_') == wxString::npos)
            {
                wxMessageBox(_("Brawo! Odgadłeś słowo!"), _("Zwycięstwo!"), wxOK | wxICON_INFORMATION);
                TextCtrl1->Clear();
                gameFinished=true;
                wins+=1;
                UpdateCupImage();
                StaticText7->SetLabelText(wxString::Format(_("%d"), wins));
                points+=10;
                StaticText6->SetLabel(wxString::Format(_("%d"), points));
                return;
            }

            TextCtrl1->Clear();

            if (!correctGuess)
          {
                incorrectGuesses++;

                currentHangmanImage++;

                wxString imageName = wxString::Format("wisielec%d.jpg", currentHangmanImage);
                wxBitmap hangmanBitmap(imageName, wxBITMAP_TYPE_JPEG);

                if (hangmanBitmap.IsOk())
                {
                    StaticBitmap1->SetBitmap(hangmanBitmap);
                }

                if (incorrectGuesses == 10)
                {
                    wxMessageBox(_("Przegrałeś! Hasło to: ") + secretWord, _("Porażka!"), wxOK | wxICON_INFORMATION);
                }
            }

            StaticText3->SetLabel(usedLetters);
        }
        else
        {
            wxMessageBox(_("Użyłeś już tę literę. Spróbuj inną."), _("Błąd!"), wxOK | wxICON_ERROR);
            TextCtrl1->Clear();
        }
    }

    }
    else
    {
        wxMessageBox(_("Gra została już zakończona!"), _("Koniec gry!"), wxOK | wxICON_INFORMATION);
        //TextCtrl1->Clear();
        return;
    }

}

void wisielecDialog::InitializeGame()
{
   LoadWordsFromFile("slowa.txt");

    size_t wordIndex = rand() % wordsList.size();
    secretWord = wordsList[wordIndex];
    category = categoriesList[wordIndex];

    guessedWord="";
    for (int i=0; i< secretWord.length();i++)
        guessedWord += "_ ";

    usedLetters.clear();

    incorrectGuesses = 0;
    gameFinished = false;

    StaticText1->SetLabel(guessedWord);
    StaticText3->SetLabel(usedLetters);
    StaticText5->SetLabel(category);
    StaticText7->SetLabelText(wxString::Format(_("%d"), wins));
    StaticText6->SetLabel(wxString::Format(_("%d"), points));

    currentHangmanImage = 0;
    TextCtrl1->Clear();

    wxString imageName = wxString::Format("wisielec0.jpg");

            wxBitmap hangmanBitmap(imageName, wxBITMAP_TYPE_JPEG);

            if (hangmanBitmap.IsOk())
            {
                StaticBitmap1->SetBitmap(hangmanBitmap);
            }

}

void wisielecDialog::OnButton2Click(wxCommandEvent& event)
{
    InitializeGame();
}

void wisielecDialog::LoadWordsFromFile(const wxString& fileName)
{
    std::ifstream file(fileName.ToStdString());

    if (file.is_open()) {
        std::string line;

        while (std::getline(file, line)) {
            std::istringstream iss(line);
            std::string category, word;

            if (iss >> category >> std::ws && std::getline(iss, word)) {
                wordsList.push_back(wxString::FromUTF8(word.c_str()));
                categoriesList.push_back(wxString::FromUTF8(category.c_str()));
            } else {
                wxLogMessage(_("Nieprawidłowy format wiersza: %s"), wxString::FromUTF8(line.c_str()));
            }
        }

        file.close();
    } else {
        wxLogError(_("Nie udało się otworzyć pliku: %s"), wxString::FromUTF8(fileName.c_str()));
        wxMessageBox(wxString::FromUTF8(_("Nie udało się otworzyć pliku ")) + fileName, wxString::FromUTF8(_("Błąd!")), wxOK | wxICON_ERROR);
    }
}

void wisielecDialog::OnBitmapButton1Click(wxCommandEvent& event)
{
     if(!gameFinished && incorrectGuesses<10)
     {
         if (secretWord.empty()) {
        wxMessageBox(_("Brak słowa do odgadnięcia!"), _("Błąd!"), wxOK | wxICON_ERROR);
        return;
    }

    if (points >= 10)
    {
        wxString remainingLetters;
        for (size_t i = 0; i < secretWord.length(); ++i)
        {
            if (guessedWord[i * 2] == '_') {
                remainingLetters += secretWord[i];
            }
        }

        if (!remainingLetters.empty()) {
            points -= 10;
            StaticText6->SetLabel(wxString::Format(_("%d"), points));

            size_t randomIndex = rand() % remainingLetters.length();
            char randomLetter = remainingLetters[randomIndex];

            if (!usedLetters.empty()) {
                usedLetters += ", ";
            }
            usedLetters += wxString(randomLetter);
            StaticText3->SetLabel(usedLetters);

            for (size_t i = 0; i < secretWord.length(); ++i) {
                if (secretWord[i] == randomLetter) {
                    guessedWord[i * 2] = randomLetter;
                }
            }

            StaticText1->SetLabel(guessedWord);

            if (guessedWord.find('_') == wxString::npos) {
                wxMessageBox(_("Brawo! Odgadłeś słowo!"), _("Zwycięstwo!"), wxOK | wxICON_INFORMATION);
                TextCtrl1->Clear();
                gameFinished=true;
                wins += 1;
                UpdateCupImage();
                StaticText7->SetLabelText(wxString::Format(_("%d"), wins));
                points += 10;
                StaticText6->SetLabel(wxString::Format(_("%d"), points));
                return;
            }
        else if (incorrectGuesses == 10)
                {
                    wxMessageBox(_("Przegraleś! Hasło to: ") + secretWord, _("Porażka!"), wxOK | wxICON_INFORMATION);
                    TextCtrl1->Clear();
                    gameFinished = true;
                }
        } else
        {
            wxMessageBox(_("Wszystkie litery zostały już odgadnięte!"), _("Brak podpowiedzi"), wxOK | wxICON_INFORMATION);
        }
    } else
        {
        wxMessageBox(_("Masz za mało diamentów! Nie możesz skorzystać z podpowiedzi!"), _("Brak diamentów!"), wxOK | wxICON_INFORMATION);
        }
     }
     else
     {
        wxMessageBox(_("Gra została już zakończona!"), _("Koniec gry!"), wxOK | wxICON_INFORMATION);
        return;
     }
}
void wisielecDialog::UpdateCupImage()
{
    if (wins >= 5 && wins < 10)
    {
        StaticBitmap3->SetBitmap(wxBitmap(wxImage(("puchar_1.png"))));
    }
    else if (wins >= 10 && wins < 15)
    {
        StaticBitmap3->SetBitmap(wxBitmap(wxImage(_T("puchar_2.png"))));
    }
    else if (wins >= 15)
    {
        StaticBitmap3->SetBitmap(wxBitmap(wxImage(_T("puchar_3.png"))));
    }

    StaticBitmap3->Refresh();
}
