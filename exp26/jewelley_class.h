
#ifndef JEWELLEY_CLASS_H
#define JEWELLEY_CLASS_H

#include "permission_class.h"


/**
  * class jewelley_class
  * 
  */

class jewelley_class : public permission_class
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  jewelley_class();

  /**
   * Empty Destructor
   */
  virtual ~jewelley_class();

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
  void addJewellery()
  {
  }


  /**
   */
  void deleteJewellery()
  {
  }


  /**
   */
  void searchJewellery()
  {
  }


  /**
   */
  void editJewellery()
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

  void jewellery_id;
  void jewellery_type;
  void jewellery_description;
  void Jewellery_name;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of jewellery_id
   * @param value the new value of jewellery_id
   */
  void setJewellery_id(void value)
  {
    jewellery_id = value;
  }

  /**
   * Get the value of jewellery_id
   * @return the value of jewellery_id
   */
  void getJewellery_id()
  {
    return jewellery_id;
  }

  /**
   * Set the value of jewellery_type
   * @param value the new value of jewellery_type
   */
  void setJewellery_type(void value)
  {
    jewellery_type = value;
  }

  /**
   * Get the value of jewellery_type
   * @return the value of jewellery_type
   */
  void getJewellery_type()
  {
    return jewellery_type;
  }

  /**
   * Set the value of jewellery_description
   * @param value the new value of jewellery_description
   */
  void setJewellery_description(void value)
  {
    jewellery_description = value;
  }

  /**
   * Get the value of jewellery_description
   * @return the value of jewellery_description
   */
  void getJewellery_description()
  {
    return jewellery_description;
  }

  /**
   * Set the value of Jewellery_name
   * @param value the new value of Jewellery_name
   */
  void setJewellery_name(void value)
  {
    Jewellery_name = value;
  }

  /**
   * Get the value of Jewellery_name
   * @return the value of Jewellery_name
   */
  void getJewellery_name()
  {
    return Jewellery_name;
  }

  void initAttributes();

};

#endif // JEWELLEY_CLASS_H
