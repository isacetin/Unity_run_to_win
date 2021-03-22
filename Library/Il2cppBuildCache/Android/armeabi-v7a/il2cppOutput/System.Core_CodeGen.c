#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000007 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000008 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000009 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000A TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000C TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000D System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000F System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000011 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000013 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000014 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000015 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000016 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000017 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000018 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000019 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000001A System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000001B System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000001C System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001D System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000001E System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000001F System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000020 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000021 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000022 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000023 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000024 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000027 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000028 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000029 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000002A System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000002B System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000002C System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000002D System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000002E System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000002F System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000030 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000031 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000032 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000033 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000034 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000035 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000036 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000037 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000038 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000039 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x0000003A System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x0000003B System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x0000003C System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x0000003D System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x0000003E System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x0000003F System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x00000040 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x00000041 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000042 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000043 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000044 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000045 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000046 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000047 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000048 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000049 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000004A System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000004B System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000004C System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x0000004D System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x0000004E System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000004F System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000050 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000051 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000052 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000053 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000054 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000055 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000056 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000057 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000058 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000059 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x0000005A System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x0000005B System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x0000005C System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x0000005D T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x0000005E System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x0000005F System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[95] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[95] = 
{
	2279,
	2363,
	2363,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[28] = 
{
	{ 0x02000004, { 47, 4 } },
	{ 0x02000005, { 51, 9 } },
	{ 0x02000006, { 60, 7 } },
	{ 0x02000007, { 67, 10 } },
	{ 0x02000008, { 77, 1 } },
	{ 0x0200000A, { 78, 3 } },
	{ 0x0200000B, { 83, 5 } },
	{ 0x0200000C, { 88, 7 } },
	{ 0x0200000D, { 95, 3 } },
	{ 0x0200000E, { 98, 7 } },
	{ 0x0200000F, { 105, 4 } },
	{ 0x02000010, { 109, 21 } },
	{ 0x02000012, { 130, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 5 } },
	{ 0x06000006, { 15, 2 } },
	{ 0x06000007, { 17, 1 } },
	{ 0x06000008, { 18, 3 } },
	{ 0x06000009, { 21, 2 } },
	{ 0x0600000A, { 23, 4 } },
	{ 0x0600000B, { 27, 4 } },
	{ 0x0600000C, { 31, 3 } },
	{ 0x0600000D, { 34, 1 } },
	{ 0x0600000E, { 35, 3 } },
	{ 0x0600000F, { 38, 2 } },
	{ 0x06000010, { 40, 2 } },
	{ 0x06000011, { 42, 5 } },
	{ 0x0600002F, { 81, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[132] = 
{
	{ (Il2CppRGCTXDataType)2, 1218 },
	{ (Il2CppRGCTXDataType)3, 3996 },
	{ (Il2CppRGCTXDataType)2, 1999 },
	{ (Il2CppRGCTXDataType)2, 1702 },
	{ (Il2CppRGCTXDataType)3, 6928 },
	{ (Il2CppRGCTXDataType)2, 1293 },
	{ (Il2CppRGCTXDataType)2, 1706 },
	{ (Il2CppRGCTXDataType)3, 6941 },
	{ (Il2CppRGCTXDataType)2, 1704 },
	{ (Il2CppRGCTXDataType)3, 6934 },
	{ (Il2CppRGCTXDataType)2, 425 },
	{ (Il2CppRGCTXDataType)3, 19 },
	{ (Il2CppRGCTXDataType)3, 20 },
	{ (Il2CppRGCTXDataType)2, 765 },
	{ (Il2CppRGCTXDataType)3, 2915 },
	{ (Il2CppRGCTXDataType)2, 1520 },
	{ (Il2CppRGCTXDataType)3, 5972 },
	{ (Il2CppRGCTXDataType)3, 3240 },
	{ (Il2CppRGCTXDataType)2, 476 },
	{ (Il2CppRGCTXDataType)3, 447 },
	{ (Il2CppRGCTXDataType)3, 448 },
	{ (Il2CppRGCTXDataType)2, 1294 },
	{ (Il2CppRGCTXDataType)3, 4279 },
	{ (Il2CppRGCTXDataType)2, 1150 },
	{ (Il2CppRGCTXDataType)2, 837 },
	{ (Il2CppRGCTXDataType)2, 942 },
	{ (Il2CppRGCTXDataType)2, 999 },
	{ (Il2CppRGCTXDataType)2, 1151 },
	{ (Il2CppRGCTXDataType)2, 838 },
	{ (Il2CppRGCTXDataType)2, 943 },
	{ (Il2CppRGCTXDataType)2, 1000 },
	{ (Il2CppRGCTXDataType)2, 944 },
	{ (Il2CppRGCTXDataType)2, 1001 },
	{ (Il2CppRGCTXDataType)3, 2916 },
	{ (Il2CppRGCTXDataType)2, 935 },
	{ (Il2CppRGCTXDataType)2, 936 },
	{ (Il2CppRGCTXDataType)2, 997 },
	{ (Il2CppRGCTXDataType)3, 2914 },
	{ (Il2CppRGCTXDataType)2, 836 },
	{ (Il2CppRGCTXDataType)2, 941 },
	{ (Il2CppRGCTXDataType)2, 835 },
	{ (Il2CppRGCTXDataType)3, 8364 },
	{ (Il2CppRGCTXDataType)3, 2569 },
	{ (Il2CppRGCTXDataType)2, 679 },
	{ (Il2CppRGCTXDataType)2, 938 },
	{ (Il2CppRGCTXDataType)2, 998 },
	{ (Il2CppRGCTXDataType)2, 1044 },
	{ (Il2CppRGCTXDataType)3, 3997 },
	{ (Il2CppRGCTXDataType)3, 3999 },
	{ (Il2CppRGCTXDataType)2, 308 },
	{ (Il2CppRGCTXDataType)3, 3998 },
	{ (Il2CppRGCTXDataType)3, 4007 },
	{ (Il2CppRGCTXDataType)2, 1221 },
	{ (Il2CppRGCTXDataType)2, 1705 },
	{ (Il2CppRGCTXDataType)3, 6935 },
	{ (Il2CppRGCTXDataType)3, 4008 },
	{ (Il2CppRGCTXDataType)2, 974 },
	{ (Il2CppRGCTXDataType)2, 1020 },
	{ (Il2CppRGCTXDataType)3, 2921 },
	{ (Il2CppRGCTXDataType)3, 8359 },
	{ (Il2CppRGCTXDataType)3, 4000 },
	{ (Il2CppRGCTXDataType)2, 1220 },
	{ (Il2CppRGCTXDataType)2, 1703 },
	{ (Il2CppRGCTXDataType)3, 6929 },
	{ (Il2CppRGCTXDataType)3, 2920 },
	{ (Il2CppRGCTXDataType)3, 4001 },
	{ (Il2CppRGCTXDataType)3, 8358 },
	{ (Il2CppRGCTXDataType)3, 4014 },
	{ (Il2CppRGCTXDataType)2, 1222 },
	{ (Il2CppRGCTXDataType)2, 1707 },
	{ (Il2CppRGCTXDataType)3, 6942 },
	{ (Il2CppRGCTXDataType)3, 4312 },
	{ (Il2CppRGCTXDataType)3, 2142 },
	{ (Il2CppRGCTXDataType)3, 2922 },
	{ (Il2CppRGCTXDataType)3, 2141 },
	{ (Il2CppRGCTXDataType)3, 4015 },
	{ (Il2CppRGCTXDataType)3, 8360 },
	{ (Il2CppRGCTXDataType)3, 2919 },
	{ (Il2CppRGCTXDataType)2, 426 },
	{ (Il2CppRGCTXDataType)3, 23 },
	{ (Il2CppRGCTXDataType)3, 5959 },
	{ (Il2CppRGCTXDataType)2, 1521 },
	{ (Il2CppRGCTXDataType)3, 5973 },
	{ (Il2CppRGCTXDataType)2, 477 },
	{ (Il2CppRGCTXDataType)3, 449 },
	{ (Il2CppRGCTXDataType)3, 5965 },
	{ (Il2CppRGCTXDataType)3, 2123 },
	{ (Il2CppRGCTXDataType)2, 324 },
	{ (Il2CppRGCTXDataType)3, 5960 },
	{ (Il2CppRGCTXDataType)2, 1517 },
	{ (Il2CppRGCTXDataType)3, 475 },
	{ (Il2CppRGCTXDataType)2, 489 },
	{ (Il2CppRGCTXDataType)2, 667 },
	{ (Il2CppRGCTXDataType)3, 2129 },
	{ (Il2CppRGCTXDataType)3, 5961 },
	{ (Il2CppRGCTXDataType)3, 2118 },
	{ (Il2CppRGCTXDataType)3, 2119 },
	{ (Il2CppRGCTXDataType)3, 2117 },
	{ (Il2CppRGCTXDataType)3, 2120 },
	{ (Il2CppRGCTXDataType)2, 663 },
	{ (Il2CppRGCTXDataType)2, 2057 },
	{ (Il2CppRGCTXDataType)3, 2918 },
	{ (Il2CppRGCTXDataType)3, 2122 },
	{ (Il2CppRGCTXDataType)2, 922 },
	{ (Il2CppRGCTXDataType)3, 2121 },
	{ (Il2CppRGCTXDataType)2, 839 },
	{ (Il2CppRGCTXDataType)2, 2021 },
	{ (Il2CppRGCTXDataType)2, 947 },
	{ (Il2CppRGCTXDataType)2, 1002 },
	{ (Il2CppRGCTXDataType)3, 2585 },
	{ (Il2CppRGCTXDataType)2, 687 },
	{ (Il2CppRGCTXDataType)3, 3122 },
	{ (Il2CppRGCTXDataType)3, 3123 },
	{ (Il2CppRGCTXDataType)3, 3128 },
	{ (Il2CppRGCTXDataType)2, 1053 },
	{ (Il2CppRGCTXDataType)3, 3125 },
	{ (Il2CppRGCTXDataType)3, 8612 },
	{ (Il2CppRGCTXDataType)2, 668 },
	{ (Il2CppRGCTXDataType)3, 2136 },
	{ (Il2CppRGCTXDataType)1, 919 },
	{ (Il2CppRGCTXDataType)2, 2029 },
	{ (Il2CppRGCTXDataType)3, 3124 },
	{ (Il2CppRGCTXDataType)1, 2029 },
	{ (Il2CppRGCTXDataType)1, 1053 },
	{ (Il2CppRGCTXDataType)2, 2071 },
	{ (Il2CppRGCTXDataType)2, 2029 },
	{ (Il2CppRGCTXDataType)3, 3129 },
	{ (Il2CppRGCTXDataType)3, 3127 },
	{ (Il2CppRGCTXDataType)3, 3126 },
	{ (Il2CppRGCTXDataType)2, 220 },
	{ (Il2CppRGCTXDataType)3, 2143 },
	{ (Il2CppRGCTXDataType)2, 314 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	95,
	s_methodPointers,
	s_InvokerIndices,
	0,
	NULL,
	28,
	s_rgctxIndices,
	132,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
