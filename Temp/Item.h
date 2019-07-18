
#ifndef ITEM_H
#define ITEM_H

#include <QString>

/*! \brief Keeps track of all of the aspects of an item
 */

/*!
 * CLASS: Item
 * _______________________________________________________________________
 * The Item class is able to keep track of one instance of an item, including
 * the item's id, name, quantity, and if it is on the shelf or not.
 */
class Item
{
    private:

    int     _id;
    QString _name;
    int     _quantity;
    bool    _on_shelf;
    double  _price;

    public:

    //! This is the default Item constructor
    /*!
     *  This constructor initializes the private variables for the object
     */
    Item();
    
    //! This is the Item copy constructor
    /*!
     *  This constructor copies the information from another object to
     *  this object
     */
    Item(const Item &);
    
    //! This is a nondefault constructor
    /*!
     *  This constructor initializes the private data members from the arguemts
     *  as well as it initializes the isOnShelf variable to true
     */
    Item(int id, const QString & name, int quantity);
    
    //! This is a nondefault constructor
    /*!
     *  This constructor initializes the private data members from the arguemts
     */
    Item(int id, const QString & name, int quantity, bool isOnShelf);
    
    //! This is the default deconstructor
    /*!
     *  This deconstructor doesn't effect the object at all because there
     *  is no dynamic data being used in the object
     */
   ~Item();

	//! Id return
	/*!
	*   Returns the Id
	*/
    int     Id       () const;
    
	//! Name return
	/*!
	*   Returns the Name
	*/
    QString Name     () const;
    
	//! Quantity return
	/*!
	*   Returns the Quantity
	*/
    int     Quantity () const;
    
	//! OnShelf return
	/*!
	*   Returns the OnShelf
	*/
    bool    OnShelf  () const;
    
	//! Price return
	/*!
	*   Returns the Price
	*/
    double  Price    () const;

	//! Changes the name variable
	/*!
	*   This function uses the argument to update the name variable
	*/
    void ChangeName(const QString &);

	//! Updates the quantity variable
	/*!
	*   This function decreases the quantity based on how much was sold
	*/
    void Sell(int quantity);
    
	//! Sets the price variable
	/*!
	*   This function will update the price variable based on the price argument
	*/
    void SetPrice(double price);
    
	//! Restocks the item
	/*!
	*   This function restocks the item and adds the argument to the quantity
	*   in stock
	*/
    void Restock(int);
    
	//! Updates the OnShelf variable
	/*!
	*   This function sets the OnShelf variable to the argument
	*/
    void OnShelf(bool);
    
	//! Sets the OnShelf variable
	/*!
	*   Sets the OnShelf variable to false
	*/
    void Deshelve();
    
	//! Sets the OnShelf variable
	/*!
	*   Sets the OnShelf variable to true
	*/
    void Reshelve();
};

#endif
