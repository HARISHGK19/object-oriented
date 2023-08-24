
#ifndef PAYMENT_CLASS_H
#define PAYMENT_CLASS_H


/**
  * class payment_class
  * 
  */

class payment_class
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  payment_class();

  /**
   * Empty Destructor
   */
  virtual ~payment_class();

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
  void add_payment()
  {
  }


  /**
   */
  void edit_payment()
  {
  }


  /**
   */
  void delete_payment()
  {
  }


  /**
   */
  void search_payment()
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

  void payment_description;
  void payment_amount;
  void payment_date;
  void payment_customer;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of payment_description
   * @param value the new value of payment_description
   */
  void setPayment_description(void value)
  {
    payment_description = value;
  }

  /**
   * Get the value of payment_description
   * @return the value of payment_description
   */
  void getPayment_description()
  {
    return payment_description;
  }

  /**
   * Set the value of payment_amount
   * @param value the new value of payment_amount
   */
  void setPayment_amount(void value)
  {
    payment_amount = value;
  }

  /**
   * Get the value of payment_amount
   * @return the value of payment_amount
   */
  void getPayment_amount()
  {
    return payment_amount;
  }

  /**
   * Set the value of payment_date
   * @param value the new value of payment_date
   */
  void setPayment_date(void value)
  {
    payment_date = value;
  }

  /**
   * Get the value of payment_date
   * @return the value of payment_date
   */
  void getPayment_date()
  {
    return payment_date;
  }

  /**
   * Set the value of payment_customer
   * @param value the new value of payment_customer
   */
  void setPayment_customer(void value)
  {
    payment_customer = value;
  }

  /**
   * Get the value of payment_customer
   * @return the value of payment_customer
   */
  void getPayment_customer()
  {
    return payment_customer;
  }

  void initAttributes();

};

#endif // PAYMENT_CLASS_H
