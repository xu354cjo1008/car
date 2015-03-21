#ifdef __cplusplus
    extern "C" {
#endif

typedef enum {
    eStop = 0,
    eFastAccelerating,
    eSmoothAccelerating,
    eHardBreaking,
    eSmoothBreaking,
    eImmidiateBreaking,
    eCruise
} eCarState;

typedef int Velocity_t;
typedef int Acceleration_t;
struct xCAR
{
    eCarState state;
    Velocity_t velocity;
    Acceleration_t acceleration;
    void (*SpeedUp)(struct xCar *car, Velocity_t velocity);
    void (*Break)(struct xCar *car);
}

struct xCar *CarCreate(Velocity_t maxSpeed, Acceleration_t maxAcceleration);
