#ifndef CONFIGUREMIDITIMECODEDIALOG_H
#define CONFIGUREMIDITIMECODEDIALOG_H

//(*Headers(ConfigureMIDITimecodeDialog)
#include <wx/button.h>
#include <wx/choice.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
//*)

class ConfigureMIDITimecodeDialog: public wxDialog
{
    void ValidateWindow();

	public:

		ConfigureMIDITimecodeDialog(wxWindow* parent, std::string midi, int format, wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~ConfigureMIDITimecodeDialog();
        std::string GetMIDI() const;
        int GetFormat() const;

		//(*Declarations(ConfigureMIDITimecodeDialog)
		wxButton* ButtonCancel;
		wxButton* Button_Ok;
		wxChoice* Choice1;
		wxChoice* ChoiceFormat;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		//*)

	protected:

		//(*Identifiers(ConfigureMIDITimecodeDialog)
		static const long ID_STATICTEXT1;
		static const long ID_CHOICE1;
		static const long ID_STATICTEXT2;
		static const long ID_CHOICE2;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		//*)

	private:

		//(*Handlers(ConfigureMIDITimecodeDialog)
		void OnButton_OkClick(wxCommandEvent& event);
		void OnButtonCancelClick(wxCommandEvent& event);
		void OnChoice1Select(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
