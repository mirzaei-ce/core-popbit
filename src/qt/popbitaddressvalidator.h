// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef POPBIT_QT_POPBITADDRESSVALIDATOR_H
#define POPBIT_QT_POPBITADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class PopbitAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit PopbitAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Popbit address widget validator, checks for a valid popbit address.
 */
class PopbitAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit PopbitAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // POPBIT_QT_POPBITADDRESSVALIDATOR_H
