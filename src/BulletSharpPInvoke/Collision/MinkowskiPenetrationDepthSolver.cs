using SiliconStudio.Core.Mathematics;
using System;
using System.Runtime.InteropServices;
using System.Security;

namespace BulletSharp
{
	public class MinkowskiPenetrationDepthSolver : ConvexPenetrationDepthSolver
	{
		internal MinkowskiPenetrationDepthSolver(IntPtr native)
			: base(native)
		{
		}

		public MinkowskiPenetrationDepthSolver()
			: base(btMinkowskiPenetrationDepthSolver_new())
		{
		}

		[DllImport(Native.Dll, CallingConvention = Native.Conv), SuppressUnmanagedCodeSecurity]
		static extern IntPtr btMinkowskiPenetrationDepthSolver_new();
	}
}
