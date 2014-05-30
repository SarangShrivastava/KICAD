///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jan 14 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __PROPERTIES_H__
#define __PROPERTIES_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/button.h>
#include <wx/panel.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class Properties
///////////////////////////////////////////////////////////////////////////////
class Properties : public wxFrame 
{
	private:
	
	protected:
		wxPanel* m_panel2;
		wxStaticText* m_staticText1;
		wxTextCtrl* Offset_Field;
		wxStaticText* m_staticText3;
		wxTextCtrl* Amplitude_Field;
		wxStaticText* m_staticText5;
		wxTextCtrl* Frequency_Field;
		wxStaticText* m_staticText6;
		wxTextCtrl* Delay_Field;
		wxStaticText* m_staticText8;
		wxTextCtrl* DampingFactor_Field;
		wxStaticLine* m_staticline1;
		wxButton* Close_Button;
		wxButton* Ok_Button;
		
		// Virtual event handlers, overide them in your derived class
		virtual void CloseOnClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OkOnClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Properties( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Properties"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~Properties();
	
};

#endif //__PROPERTIES_H__
