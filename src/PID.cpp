#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd)
{
    m_Kp = Kp;
    m_Ki = Ki;
    m_Kd = Kd;
    m_p_error = 0.0;
    m_i_error = 0.0;
    m_d_error = 0.0;
}

void PID::UpdateError(double cte)
{
    m_d_error = cte - m_p_error;
    m_p_error = cte;
    m_i_error += cte;
}

double PID::TotalError()
{
    return -m_Kp * m_p_error - m_Kd * m_d_error - m_Ki * m_i_error;
}

