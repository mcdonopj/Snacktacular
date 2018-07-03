/*
 * Copyright 2018 Google
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.8 at Fri Feb  2 17:48:02 2018. */

#include "struct.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t google_protobuf_Struct_fields[2] = {
    PB_FIELD(  1, MESSAGE , REPEATED, CALLBACK, FIRST, google_protobuf_Struct, fields, fields, &google_protobuf_Struct_FieldsEntry_fields),
    PB_LAST_FIELD
};

const pb_field_t google_protobuf_Struct_FieldsEntry_fields[3] = {
    PB_FIELD(  1, STRING  , SINGULAR, CALLBACK, FIRST, google_protobuf_Struct_FieldsEntry, key, key, 0),
    PB_FIELD(  2, MESSAGE , SINGULAR, STATIC  , OTHER, google_protobuf_Struct_FieldsEntry, value, key, &google_protobuf_Value_fields),
    PB_LAST_FIELD
};

const pb_field_t google_protobuf_Value_fields[7] = {
    PB_FIELD(  1, UENUM   , SINGULAR, STATIC  , FIRST, google_protobuf_Value, null_value, null_value, 0),
    PB_FIELD(  2, DOUBLE  , SINGULAR, STATIC  , OTHER, google_protobuf_Value, number_value, null_value, 0),
    PB_FIELD(  3, STRING  , SINGULAR, CALLBACK, OTHER, google_protobuf_Value, string_value, number_value, 0),
    PB_FIELD(  4, BOOL    , SINGULAR, STATIC  , OTHER, google_protobuf_Value, bool_value, string_value, 0),
    PB_FIELD(  5, MESSAGE , SINGULAR, STATIC  , OTHER, google_protobuf_Value, struct_value, bool_value, &google_protobuf_Struct_fields),
    PB_FIELD(  6, MESSAGE , SINGULAR, STATIC  , OTHER, google_protobuf_Value, list_value, struct_value, &google_protobuf_ListValue_fields),
    PB_LAST_FIELD
};

const pb_field_t google_protobuf_ListValue_fields[2] = {
    PB_FIELD(  1, MESSAGE , REPEATED, CALLBACK, FIRST, google_protobuf_ListValue, values, values, &google_protobuf_Value_fields),
    PB_LAST_FIELD
};



/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(google_protobuf_Struct_FieldsEntry, value) < 65536 && pb_membersize(google_protobuf_Value, struct_value) < 65536 && pb_membersize(google_protobuf_Value, list_value) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_google_protobuf_Struct_google_protobuf_Struct_FieldsEntry_google_protobuf_Value_google_protobuf_ListValue)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(google_protobuf_Struct_FieldsEntry, value) < 256 && pb_membersize(google_protobuf_Value, struct_value) < 256 && pb_membersize(google_protobuf_Value, list_value) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_google_protobuf_Struct_google_protobuf_Struct_FieldsEntry_google_protobuf_Value_google_protobuf_ListValue)
#endif


/* On some platforms (such as AVR), double is really float.
 * These are not directly supported by nanopb, but see example_avr_double.
 * To get rid of this error, remove any double fields from your .proto.
 */
PB_STATIC_ASSERT(sizeof(double) == 8, DOUBLE_MUST_BE_8_BYTES)

/* @@protoc_insertion_point(eof) */
