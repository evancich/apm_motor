/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/ares/work2/ardupilot/modules/uavcan/dsdl/uavcan/protocol/param/Value.uavcan
 */

#pragma once

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# Single parameter value.
# The actual type should be detected from the available values, as described below.
#

bool[<=1] value_bool      # Preferred over int and float if ambiguous
int64[<=1] value_int      # Preferred over float if ambiguous
float32[<=1] value_float
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.protocol.param.Value
saturated bool[<=1] value_bool
saturated int64[<=1] value_int
saturated float32[<=1] value_float
******************************************************************************/

#undef value_bool
#undef value_int
#undef value_float

#ifndef UAVCAN_PACK_STRUCTS
# error UAVCAN_PACK_STRUCTS
#endif

namespace uavcan
{
namespace protocol
{
namespace param
{

#if UAVCAN_PACK_STRUCTS
UAVCAN_PACKED_BEGIN
#endif

template <int _tmpl>
struct UAVCAN_EXPORT Value_
{
    typedef const Value_<_tmpl>& ParameterType;
    typedef Value_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
    };

    struct FieldTypes
    {
        typedef ::uavcan::Array< ::uavcan::IntegerSpec< 1, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeDynamic, 1 > value_bool;
        typedef ::uavcan::Array< ::uavcan::IntegerSpec< 64, ::uavcan::SignednessSigned, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeDynamic, 1 > value_int;
        typedef ::uavcan::Array< ::uavcan::FloatSpec< 32, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeDynamic, 1 > value_float;
    };

    enum
    {
        MinBitLen
            = FieldTypes::value_bool::MinBitLen
            + FieldTypes::value_int::MinBitLen
            + FieldTypes::value_float::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::value_bool::MaxBitLen
            + FieldTypes::value_int::MaxBitLen
            + FieldTypes::value_float::MaxBitLen
    };

    // Constants

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::value_bool >::Type value_bool;
    typename ::uavcan::StorageType< typename FieldTypes::value_int >::Type value_int;
    typename ::uavcan::StorageType< typename FieldTypes::value_float >::Type value_float;

    Value_()
        : value_bool()
        , value_int()
        , value_float()
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
        ::uavcan::StaticAssert<100 == MaxBitLen>::check();
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

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindMessage };
    // This type has no default data type ID

    static const char* getDataTypeFullName()
    {
        return "uavcan.protocol.param.Value";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

};

#if UAVCAN_PACK_STRUCTS
UAVCAN_PACKED_END
#endif

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool Value_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        value_bool == rhs.value_bool &&
        value_int == rhs.value_int &&
        value_float == rhs.value_float;
}

template <int _tmpl>
bool Value_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(value_bool, rhs.value_bool) &&
        ::uavcan::areClose(value_int, rhs.value_int) &&
        ::uavcan::areClose(value_float, rhs.value_float);
}

template <int _tmpl>
int Value_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::value_bool::encode(self.value_bool, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::value_int::encode(self.value_int, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::value_float::encode(self.value_float, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int Value_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::value_bool::decode(self.value_bool, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::value_int::decode(self.value_int, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::value_float::decode(self.value_float, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature Value_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0xE043FDB0A0F9B148ULL);

    FieldTypes::value_bool::extendDataTypeSignature(signature);
    FieldTypes::value_int::extendDataTypeSignature(signature);
    FieldTypes::value_float::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef Value_<0> Value;

// No default registration

} // Namespace uavcan
} // Namespace protocol
} // Namespace param

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::param::Value >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::param::Value::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::param::Value >::stream(Stream& s, ::uavcan::protocol::param::Value::ParameterType obj, const int level)
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
    s << "value_bool: ";
    YamlStreamer< ::uavcan::protocol::param::Value::FieldTypes::value_bool >::stream(s, obj.value_bool, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "value_int: ";
    YamlStreamer< ::uavcan::protocol::param::Value::FieldTypes::value_int >::stream(s, obj.value_int, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "value_float: ";
    YamlStreamer< ::uavcan::protocol::param::Value::FieldTypes::value_float >::stream(s, obj.value_float, level + 1);
}

}

namespace uavcan
{
namespace protocol
{
namespace param
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::param::Value::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::param::Value >::stream(s, obj, 0);
    return s;
}

}
}
}