
#ifndef LIBRARY_H
#define LIBRARY_H


/**
  * class library
  * 
  */

class library
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  library();

  /**
   * Empty Destructor
   */
  virtual ~library();

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
  void login()
  {
  }


  /**
   */
  void logout()
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

  void username;
  void password;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


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

#endif // LIBRARY_H
