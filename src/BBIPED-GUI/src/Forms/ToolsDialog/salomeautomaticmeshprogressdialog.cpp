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
***/
#include "salomeautomaticmeshprogressdialog.h"
#include "ui_salomeautomaticmeshprogressdialog.h"

/**
 * @brief
 *
 * @param parent
 */
SalomeAutomaticMeshProgressDialog::SalomeAutomaticMeshProgressDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SalomeAutomaticMeshProgressDialog)
{
    ui->setupUi(this);
}

/**
 * @brief
 *
 */
SalomeAutomaticMeshProgressDialog::~SalomeAutomaticMeshProgressDialog()
{
    delete ui;
}

/**
 * @brief
 *
 * @return QTextEdit
 */
QTextEdit * SalomeAutomaticMeshProgressDialog::getTextEditor()
{
    return ui->meshCreationProgressConsoletextEdit;
}
