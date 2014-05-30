#include <Properties_Gui.h>
#include <iostream>
#include <wx/tooltip.h>
#include <wx/hyperlink.h>

#include <fctsys.h>
#include <pgm_base.h>
#include <kiway.h>
#include <gr_basic.h>
#include <class_drawpanel.h>
#include <confirm.h>
#include <class_sch_screen.h>
#include <wxEeschemaStruct.h>
#include <base_units.h>

#include <general.h>
#include <class_library.h>
#include <sch_component.h>
#include <dialog_helpers.h>

Properties_Gui::Properties_Gui( wxWindow* parent )
:
Properties( parent )
{
m_Parent = (SCH_EDIT_FRAME*) parent;
Center();
}

void SCH_EDIT_FRAME::EditProperties( SCH_COMPONENT* aComponent )
{
   /* wxCHECK_RET( aComponent != NULL && aComponent->Type() == SCH_COMPONENT_T,
                wxT( "Invalid component object pointer.  Bad Programmer!" )  );

    m_canvas->SetIgnoreMouseEvents( true );

    Properties_Gui* dlg = new Properties_Gui( this );

    dlg->InitBuffers( aComponent );

    // make sure the chipnameTextCtrl is wide enough to hold any unusually long chip names:
    EnsureTextCtrlWidth( dlg->chipnameTextCtrl );

   	dlg->ShowQuasiModal();

    //m_canvas->SetIgnoreMouseEvents( false );
    m_canvas->MoveCursorToCrossHair();
    dlg->Destroy();*/
    
    
     Properties_Gui* dlg = new Properties_Gui( this );
    dlg ->Show();
    //SetTopWindow( dlg );
}

void Properties_Gui::CloseOnClick( wxCommandEvent& event )
{
	Close();
}

void Properties_Gui::OkOnClick( wxCommandEvent& event )
{
// TODO: Implement OkOnClick
}



