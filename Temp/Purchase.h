
#ifndef PURCHASE_H
#define PURCHASE_H

#include <QString>
#include "Item.h"
#include "Member.h"
#include "Binomial.h"

/*! \brief Maintains all of the information for a purchase
 */

/*!
 * CLASS: Purchase
 * _______________________________________________________________________
 * The Purchase class keeps track of a current purchase, including the id,
 * quantity, and sale date of the purchase.
 */
class Purchase
{
	private:

	Binomial<Item, Member> _pair;

    int  _id;
	int  _quantity;
	Date _sale;

	public:

    //! This is a nondefault constructor
    /*!
     *  This constructor will initialize the variables from the arguments
     */
    Purchase(int ID,
             Item   *& itemRef,
			 Member *& memberRef,
	         int quantity, const Date & sale);

    //! This is a nondefault constructor
    /*!
     *  This constructor will initialize the variables from the arguments,
     *  except instead of copying the date object over, it reads in individual
     *  year, month, and day
     */
    Purchase(int ID,
             Item   *& itemRef,
			 Member *& memberRef,
	         int quantity, int year, int month, int day);

    //! This is the default deconstructor
    /*!
     *  This deconstructor doesn't effect the object at all because there
     *  is no dynamic data being used in the object
     */
   ~Purchase();

    void   SetID        ();
    
	//! ItemRef return
	/*!
	*   This returns what the ItemRef is pointing to
	*/
	Item   *& ItemRef   ();
	
	//! MemberRef return
	/*!
	*   This returns what the MemberRef is pointing to
	*/
	Member *& MemberRef ();
	//! ID return
	/*!
	*   Returns the ID variable
	*/
    int  ID         () const;

	//! Quantity return
	/*!
	*   Returns the Quantity
	*/
	int  Quantity   () const;
	
	//! DateOfSale return
	/*!
	*   Returns the DateOfSale
	*/
	Date DateOfSale () const;
};

#endif
