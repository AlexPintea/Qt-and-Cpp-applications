#ifndef MAINFRAME_H
#define MAINFRAME_H

#include <QMainWindow>
///#include <QMediaPlayer>
namespace Ui {
class MainFrame;
}

class MainFrame : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainFrame(QWidget *parent = 0);
    ~MainFrame();

private slots:

    void on_DirectlyClose_clicked();

    void on_FileCloseButton_clicked();

    void on_SureCloseOkButton_clicked();

    void on_SureCloseCancelButton_clicked();

    void on_FileButton_clicked();

    void on_AreYouSureCloseButton_clicked();

    void on_HiddenClearButton_clicked();

    void on_EditButton_clicked();

    void on_AboutButton_clicked();

    void on_AccessButton_clicked();

    void on_AboutCloseButton_clicked();

    void on_ContributorsButton_clicked();

    void on_ContributorsCloseButton_clicked();

    void on_HiddenAboutButton_clicked();

    void on_HiddenContributorsButton_clicked();

    void on_NotesButton_clicked();

    void on_NotesCloseButton_clicked();

    void on_SitesCombo_currentIndexChanged(int index);

    void on_SitesCloseButton_clicked();

    void on_SitesButton_clicked();

    void on_HelpButton_clicked();

    void on_HelpCloseButton_clicked();

    void on_HiddenHelpButton_clicked();

    void on_HiddenNotesButton_clicked();

    void on_LicenceButton_clicked();

    void on_LicenceClose_clicked();

    void on_SettingsButton_clicked();

    void on_RSlider_valueChanged(int value);

    void on_GSlider_valueChanged(int value);

    void on_BSlider_valueChanged(int value);

    void on_SendBg_clicked();

    void on_SendLines_clicked();

    void on_SendBg1_clicked();

    void on_SendButtons_clicked();

    void on_Im1_clicked();

    void on_Im2_clicked();

    void on_Im3_clicked();

    void on_Im4_clicked();

    void on_Im5_clicked();

    void on_DefaultThemeButton_clicked();

    void on_NightThemeButton_clicked();

private:
    Ui::MainFrame *ui;
};

#endif // MAINFRAME_H
