#ifndef ALVEYUTILS_H
#define ALVEYUTILS_H

#include <libdevcore/Common.h>
#include <libdevcore/FixedHash.h>

/**
 * alveyutils Provides utility functions to EVM for functionalities that already exist in alvey
 */
namespace alveyutils
{
/**
 * @brief btc_ecrecover Wrapper to CPubKey::RecoverCompact
 */
bool btc_ecrecover(dev::h256 const& hash, dev::u256 const& v, dev::h256 const& r, dev::h256 const& s, dev::h256 & key);
}

#endif
