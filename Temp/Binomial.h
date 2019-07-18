
#ifndef BINOMIAL_H
#define BINOMIAL_H

/*! \brief  The Binomial class Puts two pointers together to let the user access both
 */

/*!
 * TEMPLATE CLASS: Binomail
 * _______________________________________________________________________
 * The Binomial class puts two pointers together and allows the user to access
 * the data that is stored in them.
 */
template<typename First_Type, typename Secnd_Type>
class Binomial
{
	private:

	First_Type * _first_ptr;
	Secnd_Type * _secnd_ptr;

	public:
	
    //! This is a default constructor
    /*!
     *  This constructor does nothing
     */
	Binomial() {}
	
    //! This is a nondefault constructor
    /*!
     *  This constructor sets the arguments equal to the private pointer variables
     *  in this class
     */
	Binomial(First_Type * firstPtr, Secnd_Type * secndPtr)
	{
		_first_ptr = firstPtr;
		_secnd_ptr = secndPtr;
	}
	
    //! This is a default deconstructor
    /*!
     *  This deconstructor does nothing
     */
   ~Binomial() {}
	
	//! FirstPtr return
	/*!
	*   This returns what the FirstPtr is pointing to
	*/
	First_Type *& FirstPtr() { return _first_ptr; }
	
	//! SecndPtr return
	/*!
	*   This returns what the SecndPtr is pointing to
	*/
	Secnd_Type *& SecndPtr() { return _secnd_ptr; }
	
	//! const FirstPtr return
	/*!
	*   This returns what the FirstPtr is pointing to, this will be called upon if the 
	*   template is defined as a constant
	*/
	const First_Type *& FirstPtr() const { return _first_ptr; }
	
	//! const SecndPtr return
	/*!
	*   This returns what the SecndPtr is pointing to, this will be called upon if the 
	*   template is defined as a constant
	*/
	const Secnd_Type *& SecndPtr() const { return _secnd_ptr; }
};

#endif
