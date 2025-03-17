/***************************************************************
 * Name:      wisielecMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2024-01-09
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef WISIELECMAIN_H
#define WISIELECMAIN_H

#include <vector>
#include <fstream>
#include <wx/msgdlg.h>

//(*Headers(wisielecDialog)
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

#undef _
#define _(s) wxString::FromUTF8(s)

class wisielecDialog: public wxDialog
{
    public:
    wisielecDialog(wxWindow* parent,wxWindowID id = -1);
    virtual ~wisielecDialog();
    void InitializeGame();
    void UpdateCupImage();
    void LoadWordsFromFile(const wxString& fileName);

    private:
    wxString secretWord;
    wxString guessedWord;
    wxString usedLetters;
    wxString category;
    wxString remainingLetters;
    bool gameFinished;
    int incorrectGuesses;
    int currentHangmanImage = 0;
    int points = 80;
    int wins=0;
    std::vector<wxString> wordsList;
    std::vector<wxString> categoriesList;



        //(*Handlers(wisielecDialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        void OnBitmapButton1Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(wisielecDialog)
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT4;
        static const long ID_STATICTEXT5;
        static const long ID_STATICBITMAP4;
        static const long ID_STATICTEXT6;
        static const long ID_STATICBITMAP1;
        static const long ID_STATICBITMAP2;
        static const long ID_STATICTEXT8;
        static const long ID_BITMAPBUTTON1;
        static const long ID_BUTTON1;
        static const long ID_TEXTCTRL1;
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT3;
        static const long ID_STATICBITMAP3;
        static const long ID_STATICTEXT7;
        static const long ID_BUTTON2;
        //*)

        //(*Declarations(wisielecDialog)
        wxBitmapButton* BitmapButton1;
        wxButton* Button1;
        wxButton* Button2;
        wxStaticBitmap* StaticBitmap1;
        wxStaticBitmap* StaticBitmap2;
        wxStaticBitmap* StaticBitmap3;
        wxStaticBitmap* StaticBitmap4;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxStaticText* StaticText3;
        wxStaticText* StaticText4;
        wxStaticText* StaticText5;
        wxStaticText* StaticText6;
        wxStaticText* StaticText7;
        wxStaticText* StaticText8;
        wxTextCtrl* TextCtrl1;
        //*)

        wxFlexGridSizer* FlexGridSizer1;

        DECLARE_EVENT_TABLE()
};

#endif // WISIELECMAIN_H
