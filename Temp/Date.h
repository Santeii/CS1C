
#ifndef DATE_H
#define DATE_H

#include <QString>

class DateOffset;

/*! \brief Has a format for the date
 */

/*!
 * CLASS: Date
 * _______________________________________________________________________
 * The date class is used to keep track of dates in the program, it does
 * this via a year, month, day format. This class is able to perform
 * agregate functions on itself, as well as return any value the user
 * could ask for.
 */
class Date
{
    private:

    int _year;
    int _month;
    int _day;

    public:

    //! This is the default date constructor
    /*!
     *  This default constructor will automactically initialize the year to 
     *  1970, the month to 1, and the day to 1
     */
    Date();
    
    //! This is a copy class date constructor
    /*!
     *  If a date object is already predefined then this copy constructor can
     *  make a duplicate object
     */
    Date(const Date &);
    
    //! This is a non default date constructor
    /*!
     *  If the date is read in through a file and the individual variables are 
     *  stored separately, then this constructor will store the integers
     *  in to the private values of the object
     */
    Date(int year, int month, int day);
    
    //! This is the default date deconstructor
    /*!
     *  This deconstructor makes no changes to the object as the object doesn't
     *  deal with any dynamic memory
     */
   ~Date();

	//! Year return
	/*!
	*   Returns the year
	*/
    int Year  () const;
    
	//! Month return
	/*!
	*   Returns the month
	*/
    int Month () const;
    
	//! Day return
	/*!
	*   Returns the day
	*/
    int Day   () const;

	//! Returning function that gets the year as a qstring
	/*!
	*   This function returns the numeric year as a qstring
	*/
    static QString GetYearString  (int year, int len);
    
	//! Returning function that gets the month name as a qstring
	/*!
	*   This function uses the month integer and then will return the matching
	*   string for the name of the numeric month
	*/
    static QString GetMonthName   (int month);
    
	//! Returning function can get multiple different returns for the month
	/*!
	*   This function uses the month integer and then will enter a switch
	*   statement and either return a numeric value as a qstring or it will 
	*   return the month name as a qstring
	*/
    static QString GetMonthString (int month, int len);
    
	//! Returning function that gets the day as a qstring
	/*!
	*   This function returns the numeric day as a qstring
	*/
    static QString GetDayString   (int day, int len);

	//! Returns a qstring thats properly formatted from the individual int values
	/*!
	*   This function takes all of the values stored in the object and
	*   formats them to all be in one qstring that is returned by the function
	*/
    QString ToString(QString format) const;

	//! Overloaded operator ==
	/*!
	*   This allows the object to compare if equal to another object
	*/
    bool operator== (const Date &) const;
    
	//! Overloaded operator !=
	/*!
	*   This allows the object to compare if not equal to another object
	*/
    bool operator!= (const Date &) const;
    
	//! Overloaded operator <
	/*!
	*   This allows the object to compare if less than another object
	*/
    bool operator<  (const Date &) const;
    
	//! Overloaded operator >
	/*!
	*   This allows the object to compare if greater than another object
	*/
    bool operator>  (const Date &) const;
    
	//! Overloaded operator <=
	/*!
	*   This allows the object to compare if less than or equal to another object
	*/
    bool operator<= (const Date &) const;
    
	//! Overloaded operator >=
	/*!
	*   This allows the object to compare if greater than or equal to another object
	*/
    bool operator>= (const Date &) const;

	//! Overloaded operator +=
	/*!
	*   This allows the object to be added and set equal to another object
	*/
    Date &     operator+= (const DateOffset &);
    
	//! Overloaded operator -=
	/*!
	*   This allows the object to be subtracted and set equal to another object
	*/
    Date &     operator-= (const DateOffset &);
    
	//! Overloaded operator +
	/*!
	*   This allows the object to be added to another object
	*/
    const Date operator+  (const DateOffset &) const;
    
	//! Overloaded operator -
	/*!
	*   This allows the object to be subtracted from another object
	*/
    const Date operator-  (const DateOffset &) const;

	//! Overloaded operator +
	/*!
	*   This allows the object to be added with a DateOffset object
	*/
    const DateOffset operator+ (const Date &) const;
    
	//! Overloaded operator -
	/*!
	*   This allows the object to be subtracted from a DateOffset object
	*/
    const DateOffset operator- (const Date &) const;
};

/*! \brief Calculates differences in dates
 */

/**
 * CLASS: DateOffset : public Date
 * _______________________________________________________________________
 * The DateOffset class will calculate for everytime there is a difference
 * in the date class
 *
 */
class DateOffset: public Date
{
    public:

    //! This is the default DateOffset constructor
    /*!
     *  This default constructor doesn't effect the object
     */
    DateOffset();
    
    //! This is a copy constructor
    /*!
     *  This constructor will copy from another date object in to this new object
     */
    DateOffset(const Date &);
    
    //! This is a copy constructor
    /*!
     *  This constructor will copy from another DateOffset object in to this new object
     */
    DateOffset(const DateOffset &);
    
    //! This is a non default constructor
    /*!
     *  This constructor read in individual year, month, and day variables and 
     *  store them in the private data members
     */
    DateOffset(int year, int month, int day);
    
    //! This is the default DateOffset deconstructor
    /*!
     *  This default deconstructor doesn't effect the object
     */
   ~DateOffset();

   //! Overloaded Operator -
   /*!
    *  This operator returns the private data members of the date offset object
    *  in a DateOffset format
    */
    const DateOffset operator-() const;
};

#endif
