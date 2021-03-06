//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: GDCppDialogs.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "GDCppDialogs.h"


// Declare the bitmap loading function
extern void wxCCA21InitBitmapResources();

static bool bBitmapLoaded = false;


DebuggerGUIBase::DebuggerGUIBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCCA21InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    m_auimgr = new wxAuiManager;
    m_auimgr->SetManagedWindow( this );
    m_auimgr->SetFlags( wxAUI_MGR_LIVE_RESIZE|wxAUI_MGR_TRANSPARENT_HINT|wxAUI_MGR_TRANSPARENT_DRAG|wxAUI_MGR_ALLOW_ACTIVE_PANE|wxAUI_MGR_ALLOW_FLOATING);
    m_auimgr->GetArtProvider()->SetMetric( wxAUI_DOCKART_PANE_BORDER_SIZE, 0);
    m_auimgr->GetArtProvider()->SetMetric(wxAUI_DOCKART_GRADIENT_TYPE, wxAUI_GRADIENT_NONE);
    
    m_toolbar = new wxAuiToolBar(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxAUI_TB_PLAIN_BACKGROUND|wxAUI_TB_DEFAULT_STYLE);
    m_toolbar->SetToolBitmapSize(wxSize(16,16));
    
    m_auimgr->AddPane(m_toolbar, wxAuiPaneInfo().Direction(wxAUI_DOCK_TOP).Layer(0).Row(0).Position(0).Fixed().CaptionVisible(false).MaximizeButton(false).CloseButton(false).MinimizeButton(false).PinButton(false));
    
    m_toolbar->AddTool(ID_PLAY_TOOL, _("Play the scene"), wxXmlResource::Get()->LoadBitmap(wxT("starticon")), wxNullBitmap, wxITEM_NORMAL, _("Play the current scene"), wxT(""), NULL);
    
    m_toolbar->AddTool(ID_PAUSE_TOOL, _("Pause the scene"), wxXmlResource::Get()->LoadBitmap(wxT("pauseicon")), wxNullBitmap, wxITEM_NORMAL, _("Pause the scene being played"), wxT(""), NULL);
    
    m_toolbar->AddTool(ID_STEP_TOOL, _("Render only one frame of the scene"), wxXmlResource::Get()->LoadBitmap(wxT("stepicon")), wxNullBitmap, wxITEM_NORMAL, _("Render only one frame of the scene"), wxT(""), NULL);
    
    m_toolbar->AddSeparator();
    
    m_toolbar->AddTool(ID_ADD_OBJECT_TOOL, _("Create a new object"), wxXmlResource::Get()->LoadBitmap(wxT("addobjet")), wxNullBitmap, wxITEM_NORMAL, _("Create a new object"), wxT(""), NULL);
    
    m_toolbar->AddTool(ID_ADD_VAR_TOOL, _("Add a scene variable"), wxXmlResource::Get()->LoadBitmap(wxT("addvaricon")), wxNullBitmap, wxITEM_NORMAL, _("Add a scene variable"), wxT(""), NULL);
    
    m_toolbar->AddTool(ID_ADD_VARG_TOOL, _("Create a new global variable"), wxXmlResource::Get()->LoadBitmap(wxT("addvargicon")), wxNullBitmap, wxITEM_NORMAL, _("Create a new global variable"), wxT(""), NULL);
    m_toolbar->Realize();
    
    m_notebook = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxBK_DEFAULT);
    m_notebook->SetName(wxT("m_notebook"));
    wxImageList* m_notebook_il = new wxImageList(16, 16);
    m_notebook->AssignImageList(m_notebook_il);
    
    m_auimgr->AddPane(m_notebook, wxAuiPaneInfo().Direction(wxAUI_DOCK_CENTER).Layer(0).Row(0).Position(0).BestSize(100,100).MinSize(100,100).MaxSize(100,100).CaptionVisible(false).MaximizeButton(false).CloseButton(false).MinimizeButton(false).PinButton(false));
    m_auimgr->Update();
    
    m_panel31 = new wxPanel(m_notebook, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    int m_panel31ImgIndex;
    m_panel31ImgIndex = m_notebook_il->Add(wxXmlResource::Get()->LoadBitmap(wxT("debuggericon")));
    m_notebook->AddPage(m_panel31, _("General"), false, m_panel31ImgIndex);
    
    wxFlexGridSizer* flexGridSizer35 = new wxFlexGridSizer(1, 1, 0, 0);
    flexGridSizer35->SetFlexibleDirection( wxBOTH );
    flexGridSizer35->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer35->AddGrowableCol(0);
    flexGridSizer35->AddGrowableRow(0);
    m_panel31->SetSizer(flexGridSizer35);
    
    m_generalList = new wxListCtrl(m_panel31, ID_GENERAL_LIST_CTRL, wxDefaultPosition, wxDefaultSize, wxLC_REPORT);
    flexGridSizer35->Add(m_generalList, 0, wxALL|wxEXPAND, 0);
    m_generalList->SetMinSize(wxSize(200,100));
    
    m_panel33 = new wxPanel(m_notebook, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    int m_panel33ImgIndex;
    m_panel33ImgIndex = m_notebook_il->Add(wxXmlResource::Get()->LoadBitmap(wxT("objet")));
    m_notebook->AddPage(m_panel33, _("Objects"), false, m_panel33ImgIndex);
    
    wxFlexGridSizer* flexGridSizer39 = new wxFlexGridSizer(1, 2, 0, 0);
    flexGridSizer39->SetFlexibleDirection( wxBOTH );
    flexGridSizer39->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer39->AddGrowableCol(1);
    flexGridSizer39->AddGrowableRow(0);
    m_panel33->SetSizer(flexGridSizer39);
    
    m_objectsTree = new wxTreeCtrl(m_panel33, ID_OBJECTS_TREE_CTRL);
    flexGridSizer39->Add(m_objectsTree, 0, wxALL|wxEXPAND, 0);
    m_objectsTree->SetMinSize(wxSize(150,100));
    
    wxFlexGridSizer* flexGridSizer41 = new wxFlexGridSizer(2, 1, 0, 0);
    flexGridSizer41->SetFlexibleDirection( wxBOTH );
    flexGridSizer41->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer41->AddGrowableCol(0);
    flexGridSizer41->AddGrowableRow(1);
    
    flexGridSizer39->Add(flexGridSizer41, 1, wxALL|wxEXPAND, 0);
    
    wxFlexGridSizer* flexGridSizer43 = new wxFlexGridSizer(1, 3, 0, 0);
    flexGridSizer43->SetFlexibleDirection( wxBOTH );
    flexGridSizer43->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer43->AddGrowableCol(1);
    flexGridSizer43->AddGrowableRow(0);
    
    flexGridSizer41->Add(flexGridSizer43, 1, wxALL|wxEXPAND, 0);
    
    m_staticText45 = new wxStaticText(m_panel33, wxID_ANY, _("Object :"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer43->Add(m_staticText45, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_objectName = new wxStaticText(m_panel33, wxID_ANY, _("aaa"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer43->Add(m_objectName, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_deleteBt = new wxBitmapButton(m_panel33, ID_DELETE_BT, wxXmlResource::Get()->LoadBitmap(wxT("deleteicon")), wxDefaultPosition, wxSize(-1,-1), wxBU_AUTODRAW);
    m_deleteBt->SetToolTip(_("Delete the selected object"));
    
    flexGridSizer43->Add(m_deleteBt, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_objectList = new wxListCtrl(m_panel33, ID_OBJECT_LIST, wxDefaultPosition, wxDefaultSize, wxLC_REPORT);
    flexGridSizer41->Add(m_objectList, 0, wxALL|wxEXPAND, 0);
    m_objectList->SetMinSize(wxSize(150,100));
    
    SetName(wxT("DebuggerGUIBase"));
    SetSize(500,300);
    if (GetSizer()) {
         GetSizer()->Fit(this);
    }
}

DebuggerGUIBase::~DebuggerGUIBase()
{
    m_auimgr->UnInit();
    delete m_auimgr;

}

AndroidExportDialogBase::AndroidExportDialogBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCCA21InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxFlexGridSizer* flexGridSizer53 = new wxFlexGridSizer(0, 1, 0, 0);
    flexGridSizer53->SetFlexibleDirection( wxBOTH );
    flexGridSizer53->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer53->AddGrowableCol(0);
    flexGridSizer53->AddGrowableRow(5);
    this->SetSizer(flexGridSizer53);
    
    m_staticText55 = new wxStaticText(this, wxID_ANY, _("Exports the game to a native Android application. This will produce source files ready to be compiled for Android using the Android SDK and NDK."), wxDefaultPosition, wxSize(-1,-1), 0);
    m_staticText55->Wrap(500);
    
    flexGridSizer53->Add(m_staticText55, 0, wxALL, 5);
    
    wxStaticBoxSizer* staticBoxSizer83 = new wxStaticBoxSizer( new wxStaticBox(this, wxID_ANY, _("Note")), wxVERTICAL);
    
    flexGridSizer53->Add(staticBoxSizer83, 1, wxALL|wxEXPAND, 5);
    
    m_staticText85 = new wxStaticText(this, wxID_ANY, _("This exporter is experimental and requires you to use advanced tools to compile the game for Android. Read this article for more information:"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_staticText85->Wrap(450);
    
    staticBoxSizer83->Add(m_staticText85, 0, wxALL, 5);
    
    m_hyperLink57 = new wxHyperlinkCtrl(this, wxID_ANY, _("How to compile your game exported files"), wxT(""), wxDefaultPosition, wxSize(-1,-1), wxHL_DEFAULT_STYLE);
    m_hyperLink57->SetNormalColour(wxColour(wxT("#0000FF")));
    m_hyperLink57->SetHoverColour(wxColour(wxT("#0000FF")));
    m_hyperLink57->SetVisitedColour(wxColour(wxT("#FF0000")));
    
    staticBoxSizer83->Add(m_hyperLink57, 0, wxALL, 5);
    
    m_staticLine59 = new wxStaticLine(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxLI_HORIZONTAL);
    
    flexGridSizer53->Add(m_staticLine59, 0, wxALL|wxEXPAND, 5);
    
    m_staticText61 = new wxStaticText(this, wxID_ANY, _("Export folder:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer53->Add(m_staticText61, 0, wxALL, 5);
    
    wxFlexGridSizer* flexGridSizer63 = new wxFlexGridSizer(1, 2, 0, 0);
    flexGridSizer63->SetFlexibleDirection( wxBOTH );
    flexGridSizer63->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer63->AddGrowableCol(0);
    flexGridSizer63->AddGrowableRow(0);
    
    flexGridSizer53->Add(flexGridSizer63, 1, wxALL|wxEXPAND, 0);
    
    m_exportFolderTextCtrl = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    #if wxVERSION_NUMBER >= 3000
    m_exportFolderTextCtrl->SetHint(wxT(""));
    #endif
    m_exportFolderTextCtrl->AutoCompleteDirectories();
    
    flexGridSizer63->Add(m_exportFolderTextCtrl, 0, wxALL|wxEXPAND, 5);
    
    m_browserButton = new wxButton(this, wxID_ANY, _("Browse..."), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer63->Add(m_browserButton, 0, wxALL, 5);
    
    wxFlexGridSizer* flexGridSizer79 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer79->SetFlexibleDirection( wxBOTH );
    flexGridSizer79->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    
    flexGridSizer53->Add(flexGridSizer79, 1, wxALL|wxEXPAND, 5);
    
    m_stdBtnSizer71 = new wxStdDialogButtonSizer();
    
    flexGridSizer53->Add(m_stdBtnSizer71, 0, wxALL|wxEXPAND, 5);
    
    m_okButton = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_okButton->SetDefault();
    m_stdBtnSizer71->AddButton(m_okButton);
    
    m_cancelButton = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_stdBtnSizer71->AddButton(m_cancelButton);
    m_stdBtnSizer71->Realize();
    
    SetName(wxT("AndroidExportDialogBase"));
    SetMinClientSize(wxSize(300,250));
    SetSize(-1,-1);
    if (GetSizer()) {
         GetSizer()->Fit(this);
    }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_hyperLink57->Connect(wxEVT_COMMAND_HYPERLINK, wxHyperlinkEventHandler(AndroidExportDialogBase::OnHelpButtonClicked), NULL, this);
    m_browserButton->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(AndroidExportDialogBase::OnBrowseButtonClicked), NULL, this);
    
}

AndroidExportDialogBase::~AndroidExportDialogBase()
{
    m_hyperLink57->Disconnect(wxEVT_COMMAND_HYPERLINK, wxHyperlinkEventHandler(AndroidExportDialogBase::OnHelpButtonClicked), NULL, this);
    m_browserButton->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(AndroidExportDialogBase::OnBrowseButtonClicked), NULL, this);
    
}
