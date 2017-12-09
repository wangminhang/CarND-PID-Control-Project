#ifndef PID_H
#define PID_H

class PID {
public:
  /*
  * Errors
  */
  double m_p_error;
  double m_i_error;
  double m_d_error;

  /*
  * Coefficients
  */ 
  double m_Kp;
  double m_Ki;
  double m_Kd;

  /*
  * Constructor
  */
  PID();

  /*
  * Destructor.
  */
  virtual ~PID();

  /*
  * Initialize PID.
  */
  void Init(double Kp, double Ki, double Kd);

  /*
  * Update the PID error variables given cross track error.
  */
  void UpdateError(double cte);

  /*
  * Calculate the total PID error.
  */
  double TotalError();
};

#endif /* PID_H */
