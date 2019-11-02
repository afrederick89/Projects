#include "teaminfowindow.h"
#include "ui_teaminfowindow.h"
TeamInfoWindow::TeamInfoWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TeamInfoWindow)
{
    ui->setupUi(this);

    // set up the proxy model and set it to the view
    this->populateTableView();
    this->defaultTableState = ui->tableView->horizontalHeader()->saveState();

    ui->tableView->verticalHeader()->setVisible(false);
    ui->filterMaxMin->setText("Filter by Max");
    ui->filterMaxMin->hide();
}

TeamInfoWindow::~TeamInfoWindow()
{
    delete ui;
}

// Instantiates the proxy model and sets it to view of all the teams in database.
// Most of the time this is called, it is unneccesary, but it is just to ensure
// fluidity between different filters and sorts.
void TeamInfoWindow::populateTableView() {
    this->teamList = SQLManager::getInstance()->getAllTeams();
    TeamTableModel* model = new TeamTableModel(this->teamList);
    this->proxyModel = new QSortFilterProxyModel(this);

    proxyModel->setSourceModel(model);
    ui->tableView->setModel(proxyModel);
    ui->tableView->setSortingEnabled(true);

    // prettify the tableview
    ui->tableView->setColumnWidth(7, 150);
    ui->tableView->setColumnWidth(2, 100);
    ui->tableView->setColumnWidth(0, 150);
    ui->tableView->setColumnWidth(3, 175);
    ui->tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    for (int i = 0; i < Team::COLUMN_COUNT; i++) {
        ui->tableView->setColumnHidden(i, false);
    }
    ui->tableView->horizontalHeader()->setStretchLastSection(false);
    ui->tableView->horizontalHeader()->restoreState(this->defaultTableState);
    ui->accumulatorLabel->clear();
}

// Functions for sorting/UI related
void TeamInfoWindow::on_filterByAmerican_clicked()
{
    populateTableView();
    for (int i = 0; i < Team::COLUMN_COUNT; i++) {
        if (i != 5 && i != 1 && i != 0) {
            ui->tableView->setColumnHidden(i, true);

        }
    }

    proxyModel->setFilterFixedString("American");
    proxyModel->setFilterKeyColumn(5);

    ui->tableView->setColumnWidth(0, ui->tableView->width()/3);
    ui->tableView->setColumnWidth(1, ui->tableView->width()/3);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
}
void TeamInfoWindow::on_filterByNationals_clicked()
{
    populateTableView();
    for (int i = 0; i < Team::COLUMN_COUNT; i++) {
        if (i != 5 && i != 1 && i != 0) {
            ui->tableView->setColumnHidden(i, true);

        }
    }
    proxyModel->setFilterFixedString("National");
    proxyModel->setFilterKeyColumn(5);
    ui->tableView->setColumnWidth(0, ui->tableView->width()/3);
    ui->tableView->setColumnWidth(1, ui->tableView->width()/3);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
}



/****************** Slots for radio button filter selection *******************/
void TeamInfoWindow::on_sortByTeamNameInput_textChanged(const QString &text)
{
    proxyModel->setFilterCaseSensitivity(Qt::CaseInsensitive);
    proxyModel->setFilterFixedString(text);
    proxyModel->setFilterKeyColumn(0);
}

void TeamInfoWindow::on_backToMenuButton_clicked()
{
    this->close();
    MainMenu* newMainMenu = new MainMenu;
    newMainMenu->show();

}

void TeamInfoWindow::on_noFilter_clicked()
{
    this->populateTableView();
}

void TeamInfoWindow::on_filterByTopology_clicked()
{
    // Reset the column to base state before filtering, to avoid conflictions between previous filters
    populateTableView();

    for (int i = 0; i < Team::COLUMN_COUNT; i++) {
        if (i != 8 && i != 1 && i != 0) {
            ui->tableView->setColumnHidden(i, true);

        }
    }
    proxyModel->setFilterKeyColumn(8);
    ui->tableView->setColumnWidth(1, ui->tableView->width()/3);
    ui->tableView->setColumnWidth(0, ui->tableView->width()/3);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
}

void TeamInfoWindow::on_filterByOpenRoofType_clicked()
{
    // Reset the column to base state before filtering, to avoid conflictions between previous filters
    populateTableView();

    for (int i = 0; i < Team::COLUMN_COUNT; i++) {
        if (i != 9 && i != 1 && i != 0) {
            ui->tableView->setColumnHidden(i, true);

        }
    }
    proxyModel->setFilterFixedString("Open");
    proxyModel->setFilterKeyColumn(9);
    ui->tableView->setColumnWidth(1, ui->tableView->width()/3);
    ui->tableView->setColumnWidth(0, ui->tableView->width()/3);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);

    int openRoofTypeAccumulator = 0;
    for (int i = 0; i < this->teamList.size(); i++) {
        qDebug() << teamList[i].roofType;
        if (teamList[i].roofType == "Open") {
            openRoofTypeAccumulator++;
        }
    }

    ui->accumulatorLabel->setText("There are " + QString::number(openRoofTypeAccumulator) + " stadiums with an open roof type!");
}

void TeamInfoWindow::on_filterByDateOpened_clicked()
{
    // Reset the column to base state before filtering, to avoid conflictions between previous filters
    populateTableView();

    for (int i = 0; i < Team::COLUMN_COUNT; i++) {
        if (i != 6 && i != 1 && i != 0) {
            ui->tableView->setColumnHidden(i, true);

        }
    }
    proxyModel->setFilterKeyColumn(6);
    ui->tableView->setColumnWidth(1, ui->tableView->width()/3);
    ui->tableView->setColumnWidth(0, ui->tableView->width()/3);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
}

void TeamInfoWindow::on_filterByCapacity_clicked()
{
    // Reset the column to base state before filtering, to avoid conflictions between previous filters
    populateTableView();

    for (int i = 0; i < Team::COLUMN_COUNT; i++) {
        if (i != 2 && i != 1 && i != 0) {
            ui->tableView->setColumnHidden(i, true);

        }
    }
    proxyModel->setFilterKeyColumn(2);
    ui->tableView->setColumnWidth(1, ui->tableView->width()/3);
    ui->tableView->setColumnWidth(0, ui->tableView->width()/3);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);

    // update the accumulator label
    int totalCapacityAccumulator = 0;
    for (int i = 0; i < this->teamList.size(); i++) {
        totalCapacityAccumulator += teamList[i].seatingCapacity;
    }

    // Adds commas to separate digits in (ten)thousands place.
    QLocale::setDefault(QLocale(QLocale::English, QLocale::UnitedStates));
    QLocale aEnglish;
    QString formattedNumber = aEnglish.toString(totalCapacityAccumulator);
    ui->accumulatorLabel->setText("There is a total capacity of  " + formattedNumber + " seats among all MLB teams!");
}

void TeamInfoWindow::on_filterByDistanceToCF_clicked()
{
    // Reset the column to base state before filtering, to avoid conflictions between previous filters
    populateTableView();

    for (int i = 0; i < Team::COLUMN_COUNT; i++) {
        if (i != 7 && i != 1 && i != 0) {
            ui->tableView->setColumnHidden(i, true);
        }
    }
    proxyModel->setFilterKeyColumn(7);
    ui->tableView->setColumnWidth(1, ui->tableView->width()/3);
    ui->tableView->setColumnWidth(0, ui->tableView->width()/3);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);

    ui->filterMaxMin->show();
    ui->filterMaxMin->setText("Filter by Max");

}

void TeamInfoWindow::on_filterMaxMin_clicked()
{
    QList<Team> filteredTeams;
    if (ui->filterMaxMin->text() == "Filter by Max") {
        filteredTeams = SQLManager::getInstance()->getMaxMinDistanceToCF();
        ui->filterMaxMin->setText("Filter by Min");
    } else {
        filteredTeams = SQLManager::getInstance()->getMaxMinDistanceToCF(false);
        ui->filterMaxMin->setText("Filter by Max");
    }

    TeamTableModel* model = new TeamTableModel(filteredTeams);
    this->proxyModel = new QSortFilterProxyModel(this);

    proxyModel->setSourceModel(model);
    ui->tableView->setModel(proxyModel);
    ui->tableView->setSortingEnabled(true);

}
