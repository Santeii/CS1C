#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql>
#include <QDebug>
#include <vector>
#include "Purchase.h"
#include "Member.h"
#include "Item.h"
#include "Date.h"
#include <exception>

/*! \brief  The Database class Is a wrapper for the sqlite database
 */

/*!
 * CLASS: Database
 * _______________________________________________________________________
 * This database class copies data over from sqlite and formats it to be 
 * used in cpp
 */
class Database : public QSqlDatabase
{
public:
	
    //! Gets a new database instance
    /*!
     *  This constructor return a new instance of the database
     */
    static Database *GetInstance();
    
    //! This is a default deconstructor 
    /*!
     *  This deconstructor deletes any dynamically allocated data for the class
     */
    ~Database();

    //! Adds a new item to the database
    /*!
     *  This function inserts a new item in to the database by inserting a name,
     *  quantity, price, and onshelf
     */
    void AddItem(Item item);
    
    //! Update an item 
    /*!
     *  This function uses values from the item in the argument and transfers the data in to 
     *  the database
     */
    void UpdateItem(Item item);
    
    //! Deletes an item
    /*!
     *  This function will check to see if there is data left to be exectued and return
     *  true , if not then it will return false
     */
    bool DeleteItem(int id);
    
    //! Gets an item by checking the input ID
    /*!
     *  This function checks the item ID until it finds a match and then returns the item
     */
    Item GetItemByID(int id);
    
    //! Gets all items from the database
    /*!
     *  Creates a new QSqlTableModel and selects all items to be put in to
     *  the new table
     */
    QSqlTableModel *GetAllItems();

    //! Adds a user to the database
    /*!
     *  This function will use the member object passed in as an argument and then gets added
     *  to the database
     */
    void AddUser(Member member);
    
    //! Gets all of the members from the database
    /*!
     *  This function creates a new QSqlTableModel and selects all of the members to be
     *  put in to the new table
     */
    QSqlTableModel *GetAllMembers();
    
    //! Gets all of the filtered members from the database
    /*!
     *  This function creates a new QSqlTableModel and selects all of the filtered members to be
     *  put in to the new table
     */
    QSqlTableModel *GetFilteredMembers(QString month);

    //! Adds a purchase to the database
    /*!
     *  This function uses the argument purchase and adds it to the database
     */
    void AddPurchase(Purchase purchase);
    
    //! Gets all of the purchases from the database
    /*!
     *  This function creates a new QSqlTableModel and selects all of the filtered members to be 
     *  put in to the new table
     */
    QSqlTableModel *GetAllPurchases();

private:
    Database();
    static Database* instance;
};

#endif // DATABASE_H
