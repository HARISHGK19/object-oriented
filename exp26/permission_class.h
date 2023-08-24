
#ifndef PERMISSION_CLASS_H
#define PERMISSION_CLASS_H


/**
  * class permission_class
  * 
  */

class permission_class
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  permission_class();

  /**
   * Empty Destructor
   */
  virtual ~permission_class();

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
  void add_permission()
  {
  }


  /**
   */
  void edit_permission()
  {
  }


  /**
   */
  void delete_permission()
  {
  }


  /**
   */
  void search_permission()
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

  void permission_id;
  void permission_title;
  void permission_module;
  void permission_description;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of permission_id
   * @param value the new value of permission_id
   */
  void setPermission_id(void value)
  {
    permission_id = value;
  }

  /**
   * Get the value of permission_id
   * @return the value of permission_id
   */
  void getPermission_id()
  {
    return permission_id;
  }

  /**
   * Set the value of permission_title
   * @param value the new value of permission_title
   */
  void setPermission_title(void value)
  {
    permission_title = value;
  }

  /**
   * Get the value of permission_title
   * @return the value of permission_title
   */
  void getPermission_title()
  {
    return permission_title;
  }

  /**
   * Set the value of permission_module
   * @param value the new value of permission_module
   */
  void setPermission_module(void value)
  {
    permission_module = value;
  }

  /**
   * Get the value of permission_module
   * @return the value of permission_module
   */
  void getPermission_module()
  {
    return permission_module;
  }

  /**
   * Set the value of permission_description
   * @param value the new value of permission_description
   */
  void setPermission_description(void value)
  {
    permission_description = value;
  }

  /**
   * Get the value of permission_description
   * @return the value of permission_description
   */
  void getPermission_description()
  {
    return permission_description;
  }

  void initAttributes();

};

#endif // PERMISSION_CLASS_H
