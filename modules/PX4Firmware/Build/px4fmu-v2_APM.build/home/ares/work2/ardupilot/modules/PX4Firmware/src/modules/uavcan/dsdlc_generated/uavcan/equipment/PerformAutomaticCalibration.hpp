/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/ares/work2/ardupilot/modules/uavcan/dsdl/uavcan/equipment/257.PerformAutomaticCalibration.uavcan
 */

#pragma once

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# Fast automatic calibration request.
# http://uavcan.org/Standard_data_types_and_application_level_functions#Pre-operational_checks
#

---

# Amount of extra time the node needs to finish the procedure.
uint16 delay_msec

# Status:
#  true  - the requested procedure is being executed or was executed
#  false - the requested procedure can't be executed right now
bool ok
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.equipment.PerformAutomaticCalibration
---
saturated uint16 delay_msec
saturated bool ok
******************************************************************************/

#undef delay_msec
#undef ok

#ifndef UAVCAN_PACK_STRUCTS
# error UAVCAN_PACK_STRUCTS
#endif

namespace uavcan
{
namespace equipment
{

#if UAVCAN_PACK_STRUCTS
UAVCAN_PACKED_BEGIN
#endif

struct UAVCAN_EXPORT PerformAutomaticCalibration_
{
    template <int _tmpl>
    struct Request_
    {
        typedef const Request_<_tmpl>& ParameterType;
        typedef Request_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
        };

        struct FieldTypes
        {
        };

        enum
        {
            MinBitLen
        };

        enum
        {
            MaxBitLen
        };

        // Constants

        // Fields

        Request_()
        {
            enum { MaxByteLen = ::uavcan::BitLenToByteLen<MaxBitLen>::Result };
            ::uavcan::StaticAssert<int(MaxByteLen) <= int(::uavcan::MaxTransferPayloadLen)>::check();

            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<0 == MaxBitLen>::check();
    #endif
        }

        bool operator==(ParameterType rhs) const;
        bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

        /**
         * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
         * floating point fields at any depth.
         */
        bool isClose(ParameterType rhs) const;

        static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

        static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);
    };

    template <int _tmpl>
    struct Response_
    {
        typedef const Response_<_tmpl>& ParameterType;
        typedef Response_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
        };

        struct FieldTypes
        {
            typedef ::uavcan::IntegerSpec< 16, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > delay_msec;
            typedef ::uavcan::IntegerSpec< 1, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ok;
        };

        enum
        {
            MinBitLen
                = FieldTypes::delay_msec::MinBitLen
                + FieldTypes::ok::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::delay_msec::MaxBitLen
                + FieldTypes::ok::MaxBitLen
        };

        // Constants

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::delay_msec >::Type delay_msec;
        typename ::uavcan::StorageType< typename FieldTypes::ok >::Type ok;

        Response_()
            : delay_msec()
            , ok()
        {
            enum { MaxByteLen = ::uavcan::BitLenToByteLen<MaxBitLen>::Result };
            ::uavcan::StaticAssert<int(MaxByteLen) <= int(::uavcan::MaxTransferPayloadLen)>::check();

            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<17 == MaxBitLen>::check();
    #endif
        }

        bool operator==(ParameterType rhs) const;
        bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

        /**
         * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
         * floating point fields at any depth.
         */
        bool isClose(ParameterType rhs) const;

        static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

        static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);
    };

    typedef Request_<0> Request;
    typedef Response_<0> Response;

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindService };
    enum { DefaultDataTypeID = 257 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.equipment.PerformAutomaticCalibration";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

private:
    PerformAutomaticCalibration_(); // Don't create objects of this type. Use Request/Response instead.
};

#if UAVCAN_PACK_STRUCTS
UAVCAN_PACKED_END
#endif

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool PerformAutomaticCalibration_::Request_<_tmpl>::operator==(ParameterType rhs) const
{
    (void)rhs;
    return true;
}

template <int _tmpl>
bool PerformAutomaticCalibration_::Request_<_tmpl>::isClose(ParameterType rhs) const
{
    (void)rhs;
    return true;
}

template <int _tmpl>
int PerformAutomaticCalibration_::Request_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    return res;
}

template <int _tmpl>
int PerformAutomaticCalibration_::Request_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    return res;
}

template <int _tmpl>
bool PerformAutomaticCalibration_::Response_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        delay_msec == rhs.delay_msec &&
        ok == rhs.ok;
}

template <int _tmpl>
bool PerformAutomaticCalibration_::Response_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(delay_msec, rhs.delay_msec) &&
        ::uavcan::areClose(ok, rhs.ok);
}

template <int _tmpl>
int PerformAutomaticCalibration_::Response_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::delay_msec::encode(self.delay_msec, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::ok::encode(self.ok, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int PerformAutomaticCalibration_::Response_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::delay_msec::decode(self.delay_msec, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::ok::decode(self.ok, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
inline ::uavcan::DataTypeSignature PerformAutomaticCalibration_::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x3F40950546915073ULL);

    Response::FieldTypes::delay_msec::extendDataTypeSignature(signature);
    Response::FieldTypes::ok::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef PerformAutomaticCalibration_ PerformAutomaticCalibration;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::equipment::PerformAutomaticCalibration > _uavcan_gdtr_registrator_PerformAutomaticCalibration;

}

} // Namespace uavcan
} // Namespace equipment

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::equipment::PerformAutomaticCalibration::Request >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::equipment::PerformAutomaticCalibration::Request::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::equipment::PerformAutomaticCalibration::Request >::stream(Stream& s, ::uavcan::equipment::PerformAutomaticCalibration::Request::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
}

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::equipment::PerformAutomaticCalibration::Response >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::equipment::PerformAutomaticCalibration::Response::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::equipment::PerformAutomaticCalibration::Response >::stream(Stream& s, ::uavcan::equipment::PerformAutomaticCalibration::Response::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "delay_msec: ";
    YamlStreamer< ::uavcan::equipment::PerformAutomaticCalibration::Response::FieldTypes::delay_msec >::stream(s, obj.delay_msec, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "ok: ";
    YamlStreamer< ::uavcan::equipment::PerformAutomaticCalibration::Response::FieldTypes::ok >::stream(s, obj.ok, level + 1);
}

}

namespace uavcan
{
namespace equipment
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::equipment::PerformAutomaticCalibration::Request::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::equipment::PerformAutomaticCalibration::Request >::stream(s, obj, 0);
    return s;
}

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::equipment::PerformAutomaticCalibration::Response::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::equipment::PerformAutomaticCalibration::Response >::stream(s, obj, 0);
    return s;
}

}
}