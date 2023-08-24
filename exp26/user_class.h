
#ifndef USER_CLASS_H
#define USER_CLASS_H

#include "permission_class.h"


/**
  * class user_class
  * 
  */

class user_class : public permission_class
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  user_class();

  /**
   * Empty Destructor
   */
  virtual ~user_class();

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
  void adduser()
  {
  }


  /**
   */
  void edit_user()
  {
  }


  /**
   */
  void delete_user()
  {
  }


  /**
   */
  void search_user()
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

  void ID;
  void user_name;
  void email;
  void DOB;
  void address;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of ID
   * @param value the new value of ID
   */
  void setID(void value)
  {
    ID = value;
  }

  /**
   * Get the value of ID
   * @return the value of ID
   */
  void getID()
  {
    return ID;
  }

  /**
   * Set the value of user_name
   * @param value the new value of user_name
   */
  void setUser_name(void value)
  {
    user_name = value;
  }

  /**
   * Get the value of user_name
   * @return the value of user_name
   */
  void getUser_name()
  {
    return user_name;
  }

  /**
   * Set the value of email
   * @param value the new value of email
   */
  void setEmail(void value)
  {
    email = value;
  }

  /**
   * Get the value of email
   * @return the value of email
   */
  void getEmail()
  {
    return email;
  }

  /**
   * Set the value of DOB
   * @param value the new value of DOB
   */
  void setDOB(void value)
  {
    DOB = value;
  }

  /**
   * Get the value of DOB
   * @return the value of DOB
   */
  void getDOB()
  {
    return DOB;
  }

  /**
   * Set the value of address
   * @param value the new value of address
   */
  void setAddress(void value)
  {
    address = value;
  }

  /**
   * Get the value of address
   * @return the value of address
   */
  void getAddress()
  {
    return address;
  }

  void initAttributes();

};

#endif // USER_CLASS_H
