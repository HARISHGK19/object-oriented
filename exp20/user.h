
#ifndef USER_H
#define USER_H

#include "library.h"

#include <vector>



/**
  * class user
  * 
  */

class user : public library
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  user();

  /**
   * Empty Destructor
   */
  virtual ~user();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void view()
  {
  }


  /**
   */
  void search()
  {
  }

protected:
  // Static Protected attributes
  //  

  // Protected attributes
  //  


  // Protected attribute accessor methods
  //  


  // Protected attribute accessor methods
  //

private:
  // Static Private attributes
  //  

  // Private attributes
  //  

  void name;
  void id;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of name
   * @param value the new value of name
   */
  void setName(void value)
  {
    name = value;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  void getName()
  {
    return name;
  }

  /**
   * Set the value of id
   * @param value the new value of id
   */
  void setId(void value)
  {
    id = value;
  }

  /**
   * Get the value of id
   * @return the value of id
   */
  void getId()
  {
    return id;
  }

  void initAttributes();

};

#endif // USER_H
