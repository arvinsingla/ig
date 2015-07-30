/**
 * Render the event display.
 */
angular.module('eventApp', ['ngAnimate'])
.controller('eventController', function($http, $scope, $timeout) {

    var eventData = Drupal.settings.igEventDisplay,
        initialFetch = true;

    var rotate = function () {
        if ($scope.items && $scope.items.length) {
            $scope.currentItemIndex = ($scope.currentItemIndex >= $scope.items.length - 1) ? 0 : ++$scope.currentItemIndex;
        }
        $timeout(rotate, 10000);
    };

    $scope.title = Drupal.settings.igEventDisplay.title;
    $scope.hashtag = Drupal.settings.igEventDisplay.hashtag;
    $scope.currentItemIndex = 0;

    $http.get(eventData.url + '/api/event/' + eventData.nid + '/items').
        success(function(data) {
            $scope.items = data;
            if (initialFetch) {
                initialFetch = false;
                rotate();
            }
        })
        .error(function(error) {
        });
});