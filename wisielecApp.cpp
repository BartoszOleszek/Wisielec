/***************************************************************
 * Name:      wisielecApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2024-01-09
 * Copyright:  ()
 * License:
 **************************************************************/

#include "wisielecApp.h"

//(*AppHeaders
#include "wisielecMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(wisielecApp);

bool wisielecApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	wisielecDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
