/***
 *    This file is part of BBIPED GUI.
 *
 *   BBIPED GUI is free software: you can redistribute it and/or modify
 *   it under the terms of the Lesser GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   BBIPED GUI is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   Lesser GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with Foobar. If not, see <http://opensource.org/licenses/LGPL-3.0>.
 *
 *   Author: Dec 2016: Carmen Alonso Montes calonso@bcamath.org
***/

#include "warningrestartdialog.h"
#include "ui_warningrestartdialog.h"

WarningRestartDialog::WarningRestartDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WarningRestartDialog)
{
    ui->setupUi(this);
    _acceptToRestart = false;
}

WarningRestartDialog::~WarningRestartDialog()
{
    delete ui;
}

void WarningRestartDialog::on_restart_buttonBox_accepted()
{
    _acceptToRestart = true;
    close();
}

void WarningRestartDialog::on_restart_buttonBox_rejected()
{
    close();

}

bool WarningRestartDialog::userAcceptToRestart()
{
    return _acceptToRestart;
}
