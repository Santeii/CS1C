
#ifndef MEMBER_H
#define MEMBER_H

#include "Date.h"

const double REBATE_RATE = 0.0425;

/*! \brief Keeps track of all of the aspects of a member
 */

/*!
 * CLASS: Member
 * _______________________________________________________________________
 * The Member class keeps track of a member, including the id, name, spent,
 * premium, expires, and the active membership of the member
 */
class Member
{
    private:

    int     _id;
    QString _name;
	double  _spent;
	bool    _premium;
    Date    _expires;
    bool    _active;

    public:

    //! This is a default constructor
    /*!
     *  This constructor will initialize the variables
     */
    Member();
    
    //! This is a nondefault constructor
    /*!
     *  This constructor will initialize the variables from the arguments
     */
    Member( int id,
            const QString & name,
			float spent,
            const Date & expires );

    //! This is a nondefault constructor
    /*!
     *  This constructor will initialize the variables from the arguments
     */
    Member( int id,
            const QString & name,
			float spent,
            int year, int month, int day );

    //! This is a nondefault constructor
    /*!
     *  This constructor will initialize the variables from the arguments
     */
    Member( int id,
            const QString & name,
			float spent,
			bool premium,
            const Date & expires );

    //! This is a nondefault constructor
    /*!
     *  This constructor will initialize the variables from the arguments
     */
    Member( int id,
            const QString & name,
			float spent,
			bool premium,
            int year, int month, int day );

    //! This is a virtual deconstructor
    /*!
     *  This deconstructor does nothing
     */
	virtual ~Member();

	//! Id return
	/*!
	*   This returns what the Id is pointing to
	*/
    int     Id      () const;
    
	//! Name return
	/*!
	*   This returns what the Name is pointing to
	*/
    QString Name    () const;
    
	//! Expires return
	/*!
	*   This returns what the Expires is pointing to
	*/
    Date    Expires () const;
    
	//! Premium return
	/*!
	*   This returns what the Premium is pointing to
	*/
	bool    Premium () const;
	
	//! Spent return
	/*!
	*   This returns what the Spent is pointing to
	*/
	double  Spent   () const;
	
	//! Rebate return
	/*!
	*   This returns what the Rebate is pointing to
	*/
	double  Rebate  () const;
	
	//! Active return
	/*!
	*   This returns what the Active is pointing to
	*/
    bool    Active  () const;

	//! Changes the name of the member
	/*!
	*   This function updates the member name 
	*/
    void    ChangeName(const QString &);
    
	//! Changes the active membership of the member
	/*!
	*   This function updates the member's active membership
	*/
    void    SetActive(bool isActive);

	//! Upgrades the member's membership
	/*!
	*   This function sets the flag to true
	*/
    void    UpgradeMembership();
    
	//! Downgrades the member's membership
	/*!
	*   This function sets the flag to false
	*/
    void    DowngradeMembership();

	//! Changes the expiration date of the membership
	/*!
	*   This function uses the date argument to update the expiration date
	*/
    void    ChangeExpirationDate(const Date &);
    
	//! Changes the expiration date of the membership
	/*!
	*   This function uses the year, month, and day arguments to update the expiration date
	*/
    void    ChangeExpirationDate(int year, int month, int day);
};

#endif
