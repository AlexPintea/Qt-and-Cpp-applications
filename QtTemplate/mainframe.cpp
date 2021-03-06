#include "mainframe.h"
#include "ui_mainframe.h"
///#include "dockwidget.h"
///#include "dockwidget.ui"
///#include "dockwidget.cpp"
///#include "settings.h"
///#include "settings.ui"
///#include "settings.cpp"


MainFrame::MainFrame(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainFrame)
{
    ui->setupUi(this);

    ui->SitesLabel->setText("<a style=\"color:#534496;\" href=\"https://.dx.am/\">Go! \>\><</a>");
    ui->SureClose->hide();
    ui->File->hide();
    ui->Edit->hide();
    ui->Access->hide();
    ui->About->hide();
    ui->Contributors->hide();
    ui->Notes->hide();
    ui->Help->hide();
    ui->Licence->hide();
    ui->Sites->hide();

    on_SendButtons_clicked();
}

MainFrame::~MainFrame()
{
    delete ui;
}

int RColor=0;
int BColor=0;
int GColor=0;

int isFile=0;
int isEdit=0;
int isAbout=0;
int isAccess=0;
int isContributors=0;
int isNotes=0;
int isHelp=0;
int isLicence=0;
int isSites=0;

QString ColorString="background-color: rgb(0, 0, 0);";

void MainFrame::on_DirectlyClose_clicked()
{
    delete ui;
    on_DirectlyClose_clicked();
}


void MainFrame::on_FileCloseButton_clicked()
{
    on_HiddenClearButton_clicked();

    ui->SureClose->show();
}

void MainFrame::on_SureCloseOkButton_clicked()
{
    on_DirectlyClose_clicked();
}

void MainFrame::on_SureCloseCancelButton_clicked()
{
    ui->SureClose->hide();
}

void MainFrame::on_FileButton_clicked()
{
    isEdit=0;
    isAccess=0;

    ui->Edit->hide();
    ui->Access->hide();


    if (isFile==0){
    ui->File->show();
    isFile=1;
    }
    else {
    ui->File->hide();
    isFile=0;
    }
}

void MainFrame::on_AreYouSureCloseButton_clicked()
{
    on_SureCloseCancelButton_clicked();
}

void MainFrame::on_HiddenClearButton_clicked()
{
    isFile=0;
    isEdit=0;
    isAccess=0;

    ui->File->hide();
    ui->Edit->hide();
    ui->Access->hide();
}

void MainFrame::on_EditButton_clicked()
{

    isFile=0;
    isAccess=0;

    ui->File->hide();
    ui->Access->hide();

    if (isEdit==0){
    ui->Edit->show();
    isEdit=1;
    }
    else {
    ui->Edit->hide();
    isEdit=0;
    }
}

void MainFrame::on_AboutButton_clicked()
{
    on_HiddenClearButton_clicked();
    if(isAbout==0){
        ui->About->show();
        isAbout=1;
    }
    else {
        ui->About->hide();
        isAbout=0;
    }

}

void MainFrame::on_AccessButton_clicked()
{

    isEdit=0;
    isFile=0;

    ui->File->hide();
    ui->Edit->hide();

    if(isAccess==0){
        ui->Access->show();
        isAccess=1;
    }
    else {
        ui->Access->hide();
        isAccess=0;
    }
}

void MainFrame::on_AboutCloseButton_clicked()
{
    isAbout=0;
    ui->About->hide();
}

void MainFrame::on_ContributorsButton_clicked()
{
    on_HiddenClearButton_clicked();
    if(isContributors==0){
    ui->Contributors->show();
    isContributors=1;
    }
    else {
    ui->Contributors->hide();
    isContributors=0;
    }
}

void MainFrame::on_ContributorsCloseButton_clicked()
{
    ui->Contributors->hide();
    isContributors=0;
}

void MainFrame::on_HiddenAboutButton_clicked()
{
    on_HiddenClearButton_clicked();
    if(isAbout==0){
        ui->About->show();
        isAbout=1;
    }
    else {
        ui->About->hide();
        isAbout=0;
    }
}

void MainFrame::on_HiddenContributorsButton_clicked()
{
    on_HiddenClearButton_clicked();
    if(isContributors==0){
    ui->Contributors->show();
    isContributors=1;
    }
    else {
    ui->Contributors->hide();
    isContributors=0;
    }
}

void MainFrame::on_NotesButton_clicked()
{
    on_HiddenClearButton_clicked();
    if (isNotes==0){
        ui->Notes->show();
        isNotes=1;
    }
    else{
        ui->Notes->hide();
        isNotes=0;
    }
}

void MainFrame::on_NotesCloseButton_clicked()
{
    ui->Notes->hide();
    isNotes=0;
}

void MainFrame::on_SitesCombo_currentIndexChanged(int index)
{
    if (index==0){
        ui->Site->setText("www.dx.am");
        ui->SitesLabel->setText("<a style=\"color:#534496;\" href=\"https://.dx.am/\">Go! \>\><</a>");
        ui->SitesLabel->setTextFormat(Qt::RichText);
        ui->SitesLabel->setTextInteractionFlags(Qt::TextBrowserInteraction);
        ui->SitesLabel->setOpenExternalLinks(true);
    }
    if(index==1){
        ui->Site->setText("www.github.com");
        ui->SitesLabel->setText("<a style=\"color:#534496;\" href=\"https://.github.com/\">Go! \>\><</a>");
        ui->SitesLabel->setTextFormat(Qt::RichText);
        ui->SitesLabel->setTextInteractionFlags(Qt::TextBrowserInteraction);
        ui->SitesLabel->setOpenExternalLinks(true);
    }
}

void MainFrame::on_SitesCloseButton_clicked()
{
    isSites=0;
    ui->Sites->hide();
}

void MainFrame::on_SitesButton_clicked()
{
    on_HiddenClearButton_clicked();
    if (isSites==0){
        ui->Sites->show();
        isSites=1;
    }
    else {
        ui->Sites->hide();
        isSites=0;
    }
}

void MainFrame::on_HelpButton_clicked()
{
    on_HiddenClearButton_clicked();
    if(isHelp==0){
    ui->Help->show();
    isHelp=1;
    }
    else {
    ui->Help->hide();
    isHelp=0;
    }
}

void MainFrame::on_HelpCloseButton_clicked()
{
    isHelp=0;
    ui->Help->hide();
}

void MainFrame::on_HiddenHelpButton_clicked()
{
    on_HiddenClearButton_clicked();
    if(isHelp==0){
    ui->Help->show();
    isHelp=1;
    }
    else {
    ui->Help->hide();
    isHelp=0;
    }
}

void MainFrame::on_HiddenNotesButton_clicked()
{
    on_HiddenClearButton_clicked();
    if (isNotes==0){
        ui->Notes->show();
        isNotes=1;
    }
    else{
        ui->Notes->hide();
        isNotes=0;
    }
}

void MainFrame::on_LicenceButton_clicked()
{
    on_HiddenClearButton_clicked();
    if(isLicence==0){
        ui->Licence->show();
        isLicence=1;
    }
    else {
        ui->Licence->hide();
        isLicence=0;
    }
} //// scris aici de ce nu merge?

void MainFrame::on_LicenceClose_clicked()
{
    ui->Licence->hide();
    isLicence=0;
}

void MainFrame::on_SettingsButton_clicked()
{
///    on_HiddenClearButton_clicked();
///    Settings settings;
///    settings.setModal(true);
///    settings.exec();
///
}

void MainFrame::on_RSlider_valueChanged(int value)
{
    RColor=ui->RSlider->value();
    ui->RgbString->setText("rgb("+QString::number(RColor)+", "+QString::number(GColor)+", "+QString::number(BColor)+")");
    ui->ColorsLabel->setStyleSheet("background-color: "+ui->RgbString->text()+";");
    ColorString=ui->ColorsLabel->styleSheet();
}

void MainFrame::on_GSlider_valueChanged(int value)
{
    GColor=ui->GSlider->value();
    ui->RgbString->setText("rgb("+QString::number(RColor)+", "+QString::number(GColor)+", "+QString::number(BColor)+")");
    ui->ColorsLabel->setStyleSheet("background-color: "+ui->RgbString->text()+";");
    ColorString=ui->ColorsLabel->styleSheet();
}

void MainFrame::on_BSlider_valueChanged(int value)
{
    BColor=ui->BSlider->value();
    ui->RgbString->setText("rgb("+QString::number(RColor)+", "+QString::number(GColor)+", "+QString::number(BColor)+")");
    ui->ColorsLabel->setStyleSheet("background-color: "+ui->RgbString->text()+";");
    ColorString=ui->ColorsLabel->styleSheet();
}

void MainFrame::on_SendBg_clicked()
{
    if (ColorString.length()<36){
        ui->tabWidget->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");
        ui->label->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
        ui->label_9->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
        ui->label_10->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
        ui->label_11->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
        ui->label_12->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    }
    else {
        ui->tabWidget->setStyleSheet(ColorString+"color: rgb(0, 0, 0);");
        ui->label->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
        ui->label_9->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
        ui->label_10->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
        ui->label_11->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
        ui->label_12->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
   }
    ui->centralWidget->setStyleSheet(ColorString);
}

void MainFrame::on_SendLines_clicked()
{
    ui->line->setStyleSheet(ColorString);
    ui->line_2->setStyleSheet(ColorString);
    ui->line_3->setStyleSheet(ColorString);
    ui->line_4->setStyleSheet(ColorString);
    ui->line_5->setStyleSheet(ColorString);
    ui->line_6->setStyleSheet(ColorString);
    ui->line_7->setStyleSheet(ColorString);
    ui->line_8->setStyleSheet(ColorString);
    ui->line_9->setStyleSheet(ColorString);
    ui->line_10->setStyleSheet(ColorString);
    ui->line_11->setStyleSheet(ColorString);
}

void MainFrame::on_SendBg1_clicked()
{
    ui->Help->setStyleSheet(ColorString);
    ui->About->setStyleSheet(ColorString);
    ui->File->setStyleSheet(ColorString);
    ui->Access->setStyleSheet(ColorString);
    ui->Edit->setStyleSheet(ColorString);
    ui->Licence->setStyleSheet(ColorString);
    ui->Sites->setStyleSheet(ColorString);
    ui->SureClose->setStyleSheet(ColorString);
    ui->Notes->setStyleSheet(ColorString);
    ui->Contributors->setStyleSheet(ColorString);
    if (ColorString.length()<36){
        ui->label_2->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
        ui->label_3->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
        ui->label_4->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
        ui->label_5->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
        ui->label_6->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
        ui->label_7->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
        ui->label_8->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
      }
    else {
        ui->label_2->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
        ui->label_3->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
        ui->label_4->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
        ui->label_5->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
        ui->label_6->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
        ui->label_7->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
        ui->label_8->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
     }

}

void MainFrame::on_SendButtons_clicked()
{
    if (ColorString.length()<36){
        ui->SendBg->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");
        ui->SendBg1->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");
        ui->SendLines->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");
        ui->SendButtons->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");
        ui->DefaultThemeButton->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");
        ui->NightThemeButton->setStyleSheet(ColorString+"color: rgb(255, 255, 255);");
    }
    else {
        ui->SendBg->setStyleSheet(ColorString+"color: rgb(0, 0, 0);");
        ui->SendBg1->setStyleSheet(ColorString+"color: rgb(0, 0, 0);");
///        ui->label_10->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
///        ui->label_11->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
///        ui->label_12->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(0, 0, 0);");
        ui->SendLines->setStyleSheet(ColorString+"color: rgb(0, 0, 0);");
        ui->SendButtons->setStyleSheet(ColorString+"color: rgb(0, 0, 0);");
        ui->DefaultThemeButton->setStyleSheet(ColorString+"color: rgb(0, 0, 0);");
        ui->NightThemeButton->setStyleSheet(ColorString+"color: rgb(0, 0, 0);");
    }
}

void MainFrame::on_Im1_clicked()
{
    ui->tabWidget->setStyleSheet(ui->Im1->styleSheet()+"color: rgb(255, 255, 255); alternate-background-color: rgb(186, 189, 182);");
    ui->centralWidget->setStyleSheet(ui->Im1->styleSheet());
    ui->label->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_9->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_10->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_11->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_12->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
}

void MainFrame::on_Im2_clicked()
{
    ui->tabWidget->setStyleSheet(ui->Im2->styleSheet()+"color: rgb(255, 255, 255); alternate-background-color: rgb(186, 189, 182);");
    ui->centralWidget->setStyleSheet(ui->Im2->styleSheet());
    ui->label->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_9->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_10->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_11->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_12->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
}

void MainFrame::on_Im3_clicked()
{
    ui->tabWidget->setStyleSheet(ui->Im3->styleSheet()+"color: rgb(255, 255, 255); alternate-background-color: rgb(186, 189, 182);");
    ui->centralWidget->setStyleSheet(ui->Im3->styleSheet());
    ui->label->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_9->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_10->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_11->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_12->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
}

void MainFrame::on_Im4_clicked()
{
    ui->tabWidget->setStyleSheet(ui->Im4->styleSheet()+"color: rgb(255, 255, 255); alternate-background-color: rgb(186, 189, 182);");
    ui->centralWidget->setStyleSheet(ui->Im4->styleSheet());
    ui->label->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_9->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_10->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_11->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_12->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
}

void MainFrame::on_Im5_clicked()
{
    ui->tabWidget->setStyleSheet(ui->Im5->styleSheet()+"color: rgb(255, 255, 255); alternate-background-color: rgb(186, 189, 182);");
    ui->centralWidget->setStyleSheet(ui->Im5->styleSheet());
    ui->label->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_9->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_10->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_11->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_12->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
}

void MainFrame::on_DefaultThemeButton_clicked()
{
    on_Im3_clicked();
    ui->label->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_2->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_3->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_4->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_5->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_6->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_7->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_8->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_9->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_10->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_11->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_12->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->Help->setStyleSheet("background-color: rgb(92, 53, 102);");
    ui->About->setStyleSheet("background-color: rgb(92, 53, 102);");
    ui->File->setStyleSheet("background-color: rgb(92, 53, 102);");
    ui->Access->setStyleSheet("background-color: rgb(92, 53, 102);");
    ui->Edit->setStyleSheet("background-color: rgb(92, 53, 102);");
    ui->Licence->setStyleSheet("background-color: rgb(92, 53, 102);");
    ui->Sites->setStyleSheet("background-color: rgb(92, 53, 102);");
    ui->SureClose->setStyleSheet("background-color: rgb(92, 53, 102);");
    ui->Notes->setStyleSheet("background-color: rgb(92, 53, 102);");
    ui->Contributors->setStyleSheet("background-color: rgb(92, 53, 102);");
    ui->line->setStyleSheet(ui->Im3->styleSheet());
    ui->line_2->setStyleSheet(ui->Im3->styleSheet());
    ui->line_3->setStyleSheet(ui->Im3->styleSheet());
    ui->line_4->setStyleSheet(ui->Im3->styleSheet());
    ui->line_5->setStyleSheet(ui->Im3->styleSheet());
    ui->line_6->setStyleSheet(ui->Im3->styleSheet());
    ui->line_7->setStyleSheet(ui->Im3->styleSheet());
    ui->line_8->setStyleSheet(ui->Im3->styleSheet());
    ui->line_9->setStyleSheet(ui->Im3->styleSheet());
    ui->line_10->setStyleSheet(ui->Im3->styleSheet());
    ui->line_11->setStyleSheet(ui->Im3->styleSheet());
    ui->SendBg->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->SendBg1->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->SendLines->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->SendButtons->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->DefaultThemeButton->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->NightThemeButton->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
}

void MainFrame::on_NightThemeButton_clicked()
{
    on_Im2_clicked();
    ui->label->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_2->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_3->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_4->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_5->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_6->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_7->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_8->setStyleSheet("color: rgb(255, 255, 255); background-color: rgba(0, 0, 0, 0);");
    ui->label_9->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_10->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_11->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->label_12->setStyleSheet("color: rgb(0, 0, 0); background-color: rgba(0, 0, 0, 0);");
    ui->Help->setStyleSheet("background-color: rgb(0, 0, 0); ");
    ui->About->setStyleSheet("background-color: rgb(0, 0, 0); ");
    ui->File->setStyleSheet("background-color: rgb(0, 0, 0); ");
    ui->Access->setStyleSheet("background-color: rgb(0, 0, 0); ");
    ui->Edit->setStyleSheet("background-color: rgb(0, 0, 0); ");
    ui->Licence->setStyleSheet("background-color: rgb(0, 0, 0); ");
    ui->Sites->setStyleSheet("background-color: rgb(0, 0, 0); ");
    ui->SureClose->setStyleSheet("background-color: rgb(0, 0, 0); ");
    ui->Notes->setStyleSheet("background-color: rgb(0, 0, 0); ");
    ui->Contributors->setStyleSheet("background-color: rgb(0, 0, 0); ");
    ui->line->setStyleSheet("background-color: rgb(0, 0, 0);");
    ui->line_2->setStyleSheet("background-color: rgb(0, 0, 0);");
    ui->line_3->setStyleSheet("background-color: rgb(0, 0, 0);");
    ui->line_4->setStyleSheet("background-color: rgb(0, 0, 0);");
    ui->line_5->setStyleSheet("background-color: rgb(0, 0, 0);");
    ui->line_6->setStyleSheet("background-color: rgb(0, 0, 0);");
    ui->line_7->setStyleSheet("background-color: rgb(0, 0, 0);");
    ui->line_8->setStyleSheet("background-color: rgb(0, 0, 0);");
    ui->line_9->setStyleSheet("background-color: rgb(0, 0, 0);");
    ui->line_10->setStyleSheet("background-color: rgb(0, 0, 0);");
    ui->line_11->setStyleSheet("background-color: rgb(0, 0, 0);");
    ui->SendBg->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->SendBg1->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->SendLines->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->SendButtons->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->DefaultThemeButton->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
    ui->NightThemeButton->setStyleSheet("background-color: rgba(0, 0, 0, 0); color: rgb(255, 255, 255);");
}
