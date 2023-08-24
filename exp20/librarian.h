
#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include "library.h"

#include <vector>



/**
  * class librarian
  * 
  */

class librarian : public library
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  librarian();

  /**
   * Empty Destructor
   */
  virtual ~librarian();

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
  void add()
  {
  }


  /**
   */
  void search()
  {
  }


  /**
   */
  void delete()
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
  void username;
  void password;

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

  /**
   * Set the value of username
   * @param value the new value of username
   */
  void setUsername(void value)
  {
    username = value;
  }

  /**
   * Get the value of username
   * @return the value of username
   */
  void getUsername()
  {
    return username;
  }

  /**
   * Set the value of password
   * @param value the new value of password
   */
  void setPassword(void value)
  {
    password = value;
  }

  /**
   * Get the value of password
   * @return the value of password
   */
  void getPassword()
  {
    return password;
  }

  void initAttributes();

};

#endif // LIBRARIAN_H
