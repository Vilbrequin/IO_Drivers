#ifndef STD_TYPES_H_
#define STD_TYPES_H_

// Standard Types
typedef unsigned char           boolean;
typedef unsigned char           uint8;
typedef char                    int8;
typedef unsigned short          uint16;
typedef short                   int16;
typedef unsigned long           uint32;
typedef long                    int32;
typedef unsigned long long      uint64;
typedef long long               int64;
typedef float                   float32;
typedef double                  double64;

typedef uint8 Std_ReturnType;

#define E_OK                    (Std_ReturnType)0x00u
#define E_NOT_OK                (Std_ReturnType)0x01u

#define STD_ON                  0x01u
#define STD_OFF                 0x00u

typedef struct {
    uint16 vendorID;
    uint16 moduleID;
    uint8 sw_major_version;
    uint8 sw_minor_version;
    uint8 sw_patch_version;
}Std_VersionInfoType;

#endif /* STD_TYPES_H_ */