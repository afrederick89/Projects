#include "modifystadium.h"
#include "ui_modifystadium.h"
#include "teamtablemodel.h"
#include <QSortFilterProxyModel>
ModifyStadium::ModifyStadium(Team inTeam, QTableView* view, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifyStadium)
{

    ui->setupUi(this);
    this->genListData();
    this->view = view;
    ui->SurfaceBox->addItems(surfaceList);
    ui->LeagueBox->addItems(leagueList);
    ui->TopologyBox->addItems(topList);
    ui->RoofBox->addItems(roofList);
    ui->team_name->setText(inTeam.teamName);
    ui->NameEdit->setText(inTeam.stadiumName);
    ui->SeatingEdit->setText(QString::number(inTeam.seatingCapacity));
    ui->LocationEdit->setText(inTeam.location);
    ui->SurfaceBox->findText(inTeam.playingSurface,Qt::MatchFixedString);
    ui->LeagueBox->findText(inTeam.league,Qt::MatchFixedString);
    ui->dateEdit->setText(QString::number(inTeam.dateOpened));
    ui->DistanceEdit->setText(QString::number(inTeam.distanceToCenterField));
    ui->TopologyBox->findText(inTeam.ballparkTopology, Qt::MatchFixedString);
    ui->RoofBox->findText(inTeam.roofType, Qt::MatchFixedString);
}

void ModifyStadium::genListData(){
    surfaceList.push_back("Grass");
    surfaceList.push_back("AstroTurf GameDay Grass");
    leagueList.push_back("National");
    leagueList.push_back("American");
    topList.push_back("Retro Modern");
    topList.push_back("Retro Classic");
    topList.push_back("Jewel Box");
    topList.push_back("Modern");
    topList.push_back("Multipurpose");
    topList.push_back("Contemporary");
    roofList.push_back("Open");
    roofList.push_back("Fixed");
    roofList.push_back("Retractable");
}
ModifyStadium::~ModifyStadium()
{
    delete ui;
}

void ModifyStadium::on_pushButton_2_clicked()
{
    this->close();
}

void ModifyStadium::on_Modify_Button_clicked()
{
    QString teamName = ui->team_name->text();
    QString stadiumName = ui->NameEdit->text();
    QString seating = ui->SeatingEdit->text();
    int seatingCapacity = seating.toInt();
    QString location = ui->LocationEdit->text();
    QString playingSurface = ui->SurfaceBox->currentText();
    QString league = ui->LeagueBox->currentText();
    QString dOpen = ui->dateEdit->text();
    int dateOpened = dOpen.toInt();
    int distanceToCenterField = ui->DistanceEdit->text().toInt();
    QString ballparkTopology = ui->TopologyBox->currentText();
    QString roofType = ui->RoofBox->currentText();
    Team modData =  Team(teamName,stadiumName,seatingCapacity,location,playingSurface,
                 league,dateOpened,distanceToCenterField,ballparkTopology,roofType);

    SQLManager::getInstance()->modifyStadiumInfo(modData);
    QList<Team> justOne;
    justOne.push_back(modData);
    TeamTableModel* model = new TeamTableModel(justOne);
    QSortFilterProxyModel* proxyModel = new QSortFilterProxyModel(this);

    proxyModel->setSourceModel(model);
    view->reset();
    view->setModel(proxyModel);
    view->setSortingEnabled(true);

    view->setColumnWidth(7, 150);
    view->setColumnWidth(2, 100);
    view->setColumnWidth(0, 150);
    view->setColumnWidth(3, 175);

    for (int i = 0; i < Team::COLUMN_COUNT; i++) {
        view->setColumnHidden(i, false);
    }
    view->horizontalHeader()->setStretchLastSection(false);
    this->close();

}
