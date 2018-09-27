#include <cmath>
namespace edu {
	namespace vcccd {
		namespace vc {
			namespace csv13 {
				double computeWindChillIndex(double temperature, double windVelocity) {
					//implement the formula 
					double w;

					if (temperature > 10) return -1;

					w = 33.0 - ((10.0 * sqrt(windVelocity) - windVelocity) * (33.0 - temperature)) / 23.1;

					return w;
				}
			}
		}
	}
}